// �ּ�(comment)

//main �Լ�: program �� ���۵ɶ� ó�� ȣ��Ǵ� �Լ�
//today's topic: variable(����)
#include<stdio.h> //bring library (standard input output)

//variable: Ư�� �ڷ��� �����ϴ� ����, ram�� ����ȴ�
//ram: random access memory
//rom: read only memory
//������(byte=8bit): char(1byte:-128~127),short(2:-2^15~2^15-1),int(4:-2^31~2^31-1),long(4),longlong(8)
//�Ǽ���: 

int main() {
	printf("Hello World!\n");
	printf("char :%d\n",sizeof(char));
	printf("short :%d\n", sizeof(short));
	printf("int :%d\n", sizeof(int));
	printf("long :%d\n", sizeof(long));
	printf("long long :%d\n", sizeof(long long));
	printf("long int :%d\n", sizeof(long int));
}
