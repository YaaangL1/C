#include<iostream>
#include<iomanip>
using namespace std;
//��������
int recursion(int a,int b);
int loop(int a ,int b);

//������
int main() {
	int m, n;
	int dividend,divisor;
	//��ȡ����ֵ
	scanf_s("%d %d", &m, &n);
	//�Ƚ�����ֵ����������뱻����
	if (m > n) {
		dividend = m;
		divisor = n;
	}
	else {
		dividend = m;
		divisor = n;
	}
	//���ú���
	//�����������������뺯�������շ���ֵ
	int ret = loop(dividend, divisor);
	printf("ѭ�������ó������Լ���ǣ�%d\n", ret);

	int rt = recursion(dividend, divisor);
	printf("�ݹ鷽���ó������Լ���ǣ�%d\n", rt);
	return 0;
}

//�ݹ鷽��
int recursion(int dividend, int divisor) {
	int remainder = dividend % divisor;
	if (remainder != 0) {
		return recursion(divisor, remainder);
	}
	else {
		return divisor;
	}
}

//ѭ������
int loop(int dividend, int divisor) {
	int remainder = 1;
	for (;;) {
		remainder = dividend % divisor;
		if (remainder != 0) {
		dividend = divisor;
		divisor = remainder;
		}
		else {
			break;
		}
	}
		return divisor;
}