#main 이름을 가진 실행파일 생성 '-o' 다음 이름 지정
main : clean Date.o main.o
	g++ Date.o main.o -o main 
#Date.o 파일생성...
Date.o : Date.cpp
	g++ -c Date.cpp
#main.0 파일 생성
main.o : main.cpp
	g++ -c main.cpp

#
clean :
	rm *.o main