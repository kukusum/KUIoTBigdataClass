#include <assert.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#define MAX_USER 100

pthread_mutex_t mutex;

int dataSockets[MAX_USER];
int numberOfClients;

void *client_proc(void *arg) {
	int dataSockets = *(int *) arg;
		for (;;) {
			//read(dataSockets, ???) / write(dataSockets, ???);
			char buf[1024];
			int nread = read(dataSockets, buf, 1024);
			if (nread == 0) {
				break;
			} else if (nread == -1) {
				//error is occured!!
				break;
			} else {
		
		// buf msg ---> all clients!!
pthread_mutex_lock(&mutex);	
				for (int i = 0; i < numberOfClients; ++i) {
					write(dataSockets[i], buf, nread);
				}		
pthread_mutex_unlock(&mutex);
			}
		}
	
pthread_mutex_lock(&mutex);	
	for (int i = 0; i < numberOfClients; ++i) {
		if (dataSockets == dataSockets[i]) {
			for (int j = 1; j < numberOfClients -1; j--) {
				dataSockets[j] = dataSockets[j+1];
			}
			break;
		}
	}
	--numberOfClients;
pthread_mutex_unlock(&mutex);

	close(dataSockets);	
	return NULL;
}

int main (void) {

	pthread_mutex_init(&mutex, NULL);	
	
	int servSocket = socket(AF_INET, SOCK_STREAM, 0);		// file descriptor?
	assert(servSocket != -1);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY); //host to networks long
	servAddr.sin_port = htons(7777); //host to networks short (ipv4...?)
	//servAddr.sin_zero = ???;
	
	assert (bind (servSocket, (struct sockaddr *)&servAddr, sizeof(servAddr)) == 0);
	
	assert (listen (servSocket, 5) == 0);
	
	
	for (;;) {
		int addrLen;
		struct sockaddr_in clientAddr;
		
		int dataSockets = accept (servSocket, (struct sockaddr *)&clientAddr, &addrLen);
		assert(dataSockets != -1);

pthread_mutex_lock(&mutex);	
		dataSockets[numberOfClients] = dataSockets;
		++numberOfClients;	
pthread_mutex_unlock(&mutex);

		printf("client ip : %s\n", inet_ntoa(clientAddr.sin_addr));
		
		// print clinet info.
		
		//make a clone! ---> read / write block!
		//read (dataSockets, ???) / write(dataSockets, ???);
		pthread_t pId;
		pthread_create(&pId, NULL, client_proc, &dataSockets);
	}
	
	close (servSocket);
	pthread_mutex_destroy(&mutex);
	return 0;
}
