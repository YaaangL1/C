#include<stdio.h>
//����һ��<=6��������������������������
int demo1() {
	int a, i, j, k;
	scanf_s("%d", &a);
	for(int i = a;i<=a+3;i++){
		for (j = a; j <= a + 3; j++) {
			for (k=a; k <= a+3; k++) {
				if (i != j && i != k && j != k) {
					printf("%d%d%d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}