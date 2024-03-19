// 주석(comment)

//main 함수: program 이 시작될때 처음 호출되는 함수
//today's topic: variable(변수)
#include<stdio.h> //bring library (standard input output)

//variable: 특정 자료형 저장하는 공간, ram에 저장된다
//ram: random access memory
//rom: read only memory
//정수형(byte=8bit): char(1byte:-128~127),short(2:-2^15~2^15-1),int(4:-2^31~2^31-1),long(4),longlong(8)
//실수형: 

int main() {
	printf("Hello World!\n");
	printf("char :%d\n",sizeof(char));
	printf("short :%d\n", sizeof(short));
	printf("int :%d\n", sizeof(int));
	printf("long :%d\n", sizeof(long));
	printf("long long :%d\n", sizeof(long long));
	printf("long int :%d\n", sizeof(long int));
}
