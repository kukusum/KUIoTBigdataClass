#include <assert.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

void *send_msg(void *arg) {
	int dataSockets = *(int *)arg;	

	for (;;) {
		char buf[1024];
		fgets(buf, 1024, stdin);
		
		if (strcmp(buf, "/quit\n") == 0) {
			break;
		}
		
		write(dataSockets, buf, strlen(buf));
	}
}

void *recv_msg(void *arg) {
	for (;;) {
		int buf[1024];
		int nread = read (dataSockets, buf, 1024);
		
		if (nread == 0) {		// EOF. close(dataSockets);
			break;
		} else if (nread == -1) {
			break;
		} else {
			buf[nread] = '\0';
			printf("%s", (char *)buf);
		}
	}
}

int main (void) {
	int dataSockets = socket(AF_INET, SOCK_STREAM, 0);
	assert(dataSockets == 0);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");		// ipv4 loopback adress...
	servAddr.sin_port = htons(7777);
	assert (connect (dataSockets, (struct sockaddr *)&servAddr, sizeof(servAddr)) == 0);
	
//	read (dataSockets, ???) / write (dataSockets, ???);
	
	pthread_t pId1, pId2;
	pthread_create(&pId1, NULL, send_msg, &dataSockets);
	pthread_create(&pId2, NULL, recv_msg, &dataSockets);
	
//	for (;;) {
//		;
//	}
	
	pthread_join(pId1, NULL);
	pthread_join(pId2, NULL);
	
	close (dataSockets);
	
	return 0;
}
