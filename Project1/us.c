//us.c
#include <stdio.h>

// unsigned shor int���� US��� 
// ���ο� �̸����� ������
typedef unsigned short int US;

int main(void) {
	US data = 5;
	US temp; // unsinged short int temp;�� ����

	temp = data;
	printf("temp= %d\n", temp);

	return 0;

}