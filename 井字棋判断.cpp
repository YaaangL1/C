#include<stdio.h>
int demo4() {
	//¼�����
	//���������Խ���
	//���м���������󲻼������Խ���
	//������
	int i = 0, j = 0;
	const int size = 3;
	int board[size][size];
	int result = -1; //�����ж��Ƿ�������
	int numOfx1, numOfx, numOfo1, numOfo;
	//¼�����,1��x��0��o
	for (; i < size; i++) {
		for (; j < size; j++) {
			scanf_s("%d", &board[i][j]);
		}
	}
	//����ģ��
	//board[0][0] = 1;
	//board[0][1] = 0;
	//board[0][2] = 1;
	//board[1][0] = 0;
	//board[1][1] = 0;
	//board[1][2] = 1;
	//board[2][0] = 0;
	//board[2][1] = 1;
	//board[2][2] = 1;
	////x win


	//�������
	if (result == -1) {
		for (i; i < size; i++) {
			numOfx1 = numOfo1 = 0;
			for (j; j < size; j++) {
				//�����
				if (board[i][j] == 1) {
					numOfx1++;
				}
				else {
					numOfo1++;
				}
				//�����
				if (board[j][i]) {
					numOfx1++;
				}
				else {
					numOfo1++;
				}
			}
			//��֤���
			if (numOfx1 == 3) {
				result = 1;
				goto out;
			}
			if (numOfo1 == 3) {
				result = 0;
				goto out;
			}
		}
	}

out:

	//���Խ���
	numOfo = numOfx = 0;
	if (result == -1) {
		for (; i < size; i++) {
			if (board[i][i] == 1) {
				numOfx++;
			}
			else {
				numOfo++;
			}
		}
		if (numOfx == size) {
			result = 1;
		}
		else if (numOfo == size) {
			result = 0;
		}
		else {
			result = -1;
		}
	}
	switch (result)
	{
	case 1:
		printf("x win\n");
		break;
	case 0:
		printf("o win\n");
		break;
	case -1:
		printf("nobody win\n");
		break;
	}
	return 0;
}