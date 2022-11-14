#include<iostream>
#include<iomanip>
using namespace std;
//声明函数
int recursion(int a,int b);
int loop(int a ,int b);

//主函数
int main() {
	int m, n;
	int dividend,divisor;
	//获取输入值
	scanf_s("%d %d", &m, &n);
	//比较输入值，定义除数与被除数
	if (m > n) {
		dividend = m;
		divisor = n;
	}
	else {
		dividend = m;
		divisor = n;
	}
	//调用函数
	//将除数、被除数传入函数并接收返回值
	int ret = loop(dividend, divisor);
	printf("循环方法得出的最大公约数是：%d\n", ret);

	int rt = recursion(dividend, divisor);
	printf("递归方法得出的最大公约数是：%d\n", rt);
	return 0;
}

//递归方法
int recursion(int dividend, int divisor) {
	int remainder = dividend % divisor;
	if (remainder != 0) {
		return recursion(divisor, remainder);
	}
	else {
		return divisor;
	}
}

//循环方法
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