#include<stdio.h>
//ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������,��������Nλˮ�ɻ�����
//¼��n
//��������nλ��
//һһ�ж��Ƿ����
int demo2() {
	int n;
	scanf_s("%d", &n);
	int start = 1;
	for (int i = 1; i < n; i++) {
		start *= 10;//�ó���ʼ��
	}//no problem
	
	int end = start * 10;//�ó�����ѭ������
	int sum = 0;
	int j = start;
	for (j; j < end;j++) {         //�������з�Χ�ڵ���
		int t = j;             //��¼start��ֵ���𿪵Ĺ����б�Ȼ���ƻ�start
		for (int i = 1; t > 0; t /= 10) {         //����λ��
			int a = t % 10;
			int p = 1;
			for (int i = 0; i < n; i++) {      //����λ�����ݴη�
				p *= a;
				printf("%d", p);
			}
			sum += p;                    //ÿһ�� λ�� �Ĵη����		
		}
		if (j == sum) {
				printf("%d\n", sum);
		}
		sum = 0;
	}
return 0;
}
