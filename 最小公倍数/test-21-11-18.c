#include <stdio.h>
//最小公倍数（Least Common Multiple，LCM)
//今天准备写一个关于求最小公倍数的程序
//因为昨天听五年级马文雷老师讲了一节数学课
//里面讲到了通分，用到了求最小公倍数
//在网上找到了三种程序，现在练一手
//1.暴力求解法
//先找到较大的数，再用最大的数分别去对两个数取模
//只要取模中有一个不为0，这个数就加1再进行重复
//直到都取模为0时，这时的max就是最小公倍数
int LCM1(int a, int b) {
	int max = a > b ? a : b;
	while (max % a != 0 || max % b != 0) {
		max++;
	}
	return max;
}
//2.辗转相除法
//辗转相除法是求两个数的最大公约数
//而最小公倍数=两个数的积/最大公约数
int LCM2(int a,int b)
{
	int c = a, d = b;
	while (a % b) {
		int tmp = a % b;
		a = b;
		b = tmp;
		}
	return (c * d) / b;
}
//3.迭乘法
//就是用一个数的1倍、2倍、3倍……
//依次去除另一个数，如果余数为0，
//那此时的数就是两个数的最小公倍数
int LCM3(int a, int b) {
	int i = 1;
	while ((a * i) % b) {
		i++;
	}
	return a * i;
}
int main() {
	int a = 0, b = 0;
	printf("请输入要求最小公倍数的两个数：");
	scanf("%d%d", &a, &b);
	printf("方法1：%d\n", LCM1(a,b));
	printf("方法2：%d\n", LCM2(a,b));
	printf("方法3：%d\n", LCM3(a,b));
	return 0;
}
