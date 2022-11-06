#include<stdio.h>
//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身,计算所有N位水仙花数。
//录入n
//遍历所有n位数
//一一判断是否符合
int demo2() {
	int n;
	scanf_s("%d", &n);
	int start = 1;
	for (int i = 1; i < n; i++) {
		start *= 10;//得出开始数
	}//no problem
	
	int end = start * 10;//得出结束循环条件
	int sum = 0;
	int j = start;
	for (j; j < end;j++) {         //遍历所有范围内的数
		int t = j;             //记录start的值，拆开的过程中必然会破坏start
		for (int i = 1; t > 0; t /= 10) {         //将数位拆开
			int a = t % 10;
			int p = 1;
			for (int i = 0; i < n; i++) {      //单个位数的幂次方
				p *= a;
				printf("%d", p);
			}
			sum += p;                    //每一个 位数 的次方相加		
		}
		if (j == sum) {
				printf("%d\n", sum);
		}
		sum = 0;
	}
return 0;
}
