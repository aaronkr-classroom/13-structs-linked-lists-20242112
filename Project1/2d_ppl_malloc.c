//2d_ppl_malloc.c
#include <stdio.h>
#include <malloc.h>

int main(void) {
	// ���� 
	int ages, member, temp, sum;
	unsigned char limit_table[3];
	//���ɺ��� ���� ����Ű�� Ƚ���� ������ �迭
	unsigned char* p[3];

	//���ɺ��� ���� ����Ű�� Ƚ���� �Է¹���
	for (ages = 0; ages < 3; ages++) {
		// �� ������ ���� ����Ű�� Ƚ�� ��� �����
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", ages + 2);
		printf("�� ���ɴ�� �� �� �Դϱ�?");

		scanf_s("%d", &temp);
		limit_table[ages] = (unsigned char)temp;

		//�Է� ���� �ο�����ŭ �޸𸮸� �Ҵ�
		p[ages] = (unsigned char*)malloc(limit_table[ages]);

		//�ش� ���ɿ� �Ҽӵ� ������� ������� �Է� ����
		for (member = 0; member < limit_table[ages]; member++) {
			// #1, #2, ...��� ���
			printf("#%d: ", member + 1);

			//���� ����Ű�� Ƚ���� ������ �Է¹���
			scanf_s("%d", &temp);
			*(p[ages] + member) = (unsigned char)temp;
		}
	}
	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");


	// ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� �����
	for (ages = 0; ages < 3; ages++) {
		sum = 0;
		// 20��: 30��: 40��: ��� ���
		printf("%d0��: ", ages + 2);

		//�ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ��� 
		for (member = 0; member < limit_table[ages]; member++) {
			sum = sum + *(p[ages] + member);
		}

		//�ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / limit_table[ages]);

		free(p[ages]);

	}

	return 0;
}