#include<stdio.h>
int demo3() {
	int n ;
	scanf_s("%d", &n);
	int i = 1;
	int j;
	for (; i <= n; i++) {
		j = 1;
		for (; j <= i; j++) {
			printf("%dx%d=%d", j, i, j * i);
			if (i * j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			//if (i == j) {
				//printf("\n");
			//}
		}
		printf("\n");
	}
	return 0;
}