#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <stdio.h>
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main() {
	int a;
	scanf_s("%d", &a);
	int tmp = 0;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		 tmp = tmp * 10 + a;
		 sum += tmp;
	}
	printf("%d ", sum);
	
	system("pause");
	return 0;
}

/*
//153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
int main() {
	for (int i = 0; i < 1000; i++) {
		int sum = 0;
		for (int j = i; j; ) {
			int a = j % 10;
			sum += a*a*a;
			j /= 10;
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}


//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
int main() {
	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 2 * (i - 1) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 6; i >= 1; i--) {
		for (int j = 1; j <= 2 * (i - 1) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
int main() {
	int num = 0;
	for (int i = 1; i < 100; i++) {
		int a = i % 10;
		int b = i / 10;
		if (a == 9) {
			num++;
		}
		if (b == 9) {
			num++;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}


//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
int main() {
	double sum = 0.0;
	for (int i = 1; i <= 100; i++) {
		sum += pow(-1, i + 1)*1.0 / i;//注意这里要得到1/2=0.5，
		                              //需要在将被除数和除数设置为double或float
	}
	
	printf("%lf\n", sum);
	system("pause");
	return 0;
}

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
void Swap_ar(int* ar1,int* ar2, int n) {
	for (int i = 0; i < n; i++) {
		int tmp = ar1[i];
		ar1[i] = ar2[i];
		ar2[i] = tmp;
	}
}
void Printf_ar(int* ar,int n){
	for (int i = 0; i < n; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}
int main() {
	int ar1[] = { 1,2,3,4,5 };
	int ar2[] = { 6,7,8,9,10 };
	int n = sizeof(ar1) / sizeof(ar1[0]);
	Printf_ar(ar1, n);
	Printf_ar(ar2, n);
	Swap_ar(ar1,ar2,n);
	Printf_ar(ar1, n);
	Printf_ar(ar2, n);
	system("pause");
	return 0;
}

//猜数字游戏的实现
void menu() {
	printf("**************************\n");
	printf("*********1.开始游戏*******\n");
	printf("*********2.退出***********\n");
	printf("**************************\n");
}
void game() {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("请输入猜的数字：");
		scanf_s("%d", &input);
		if (input > random_num) {
			printf("猜大了\n");
		}
		else if (input < random_num) {
			printf("猜小了\n");
		}
		else {
			printf("恭喜您猜对了\n");
			break;
		}
	}
}
int main() {
	int input = 0;
	menu();
	while (1) {
		
		printf("请选择:");
		scanf_s("%d", &input);
		if (input == 1) {
			game();
			break;
		}
		else if(input == 2){
			break;
		}
		else {
			printf("输入有误，请重新输入！\n");
		}
	}

	printf("退出游戏，再见\n");
	system("pause");
	return 0;
}

//5.求两个数的最大公约数。
int main() {
	int a, b;
	printf("请输入两个整数：");
	scanf_s("%d%d",&a, &b);
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}

	}
	printf("a和b的最大公约数为：%d", a);

	printf("\n");
	system("pause");
	return 0;
}

//4.将三个数按从大到小输出。
void Swap(int* ap, int* bp) {
	int tmp;
	tmp = *ap;
	*ap = *bp;
	*bp = tmp;
}
int main() {

	int a = 10, b = 7, c = 4;
	if (a < b) {
		Swap(&a, &b);
	}
	if (a < c) {
		Swap(&a, &c);
	}
	if (b < c) {
		Swap(&b, &c);
	}
	printf("%d %d %d", a, b, c);
	printf("\n");
	system("pause");
	return 0;
}

//3.求10 个整数中最大值。
void printf_ar(int* ar,int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", ar[i]);
	}
}
void Bubble_Sort(int* ar ,int n) {
	for (int i = 0; i < n-1; i++) {
		int tag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (ar[j] > ar[j + 1]) {
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
				tag++;
			}
		}
		if (!tag) {
			break;
		}
	}
}
int main() {
	
	int ar[] = { 12,23,34,21,100,34,14,65,73,11 };
	int num = sizeof(ar) / sizeof(ar[0]);
	Bubble_Sort(ar, num);
	printf_ar(ar, num);
	printf("\n");
	printf("%d", ar[9]);
	printf("\n");
	system("pause");
	return 0;
}

/*
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//第一种方法，直接交换值
int main() {
int a = 2;
int b = 3;
int tmp;
tmp = a;
a = b;
b = tmp;
printf("a = %d b = %d ", a, b);
printf("\n");
system("pause");
return 0;
}
//第二种方法，使用传递指针进行交换值
//1. 给定两个整形变量的值，将两个值的内容进行交换。
void Swap(int* ap, int* bp) {
int tmp;
tmp = *ap;
*ap = *bp;
*bp = tmp;
}
int main() {
int a = 2;
int b = 3;
Swap(&a, &b);
printf("a = %d b = %d ", a, b);
printf("\n");
system("pause");
return 0;
}
//输出100到200 之间的素数，也就是质数（只能被1和它本身整除）
int main()
{
	int i, j;
	for ( i = 101; i <= 200; i++) {
		int t = sqrt(i);

		for ( j = 2; j <= t; j++) {
			if (i%j == 0) {//看i能够被谁整除
				break;//如果能整除，就停止，避免多余运算
			}
		}
		if (j > t) {
			printf("%d ", i);//该条件表明没有能够整除i的数
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
//1. 给定两个整形变量的值，将两个值的内容进行交换(不使用中间变量)
int main() {
int a = 2;
int b = 3;
a = a + b;
b = a - b;
a = a - b;
printf("a = %d b = %d ", a, b);
printf("\n");
system("pause");
return 0;
}
//判断1000年---2000年之间的闰年
int main()
{
	for (int i = 1000; i <=2000; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

//输出乘法口诀表
int main() 
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}


//经典一百练第一题
int main()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j&&i != k&&k != j)
				{
					int num = i * 100 + j * 10 + k;
					printf("%d ", num);
				}
			}
		}
	}
	system("pause");
	return 0;
}
//闰年的判断
void Is_leapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
}
int main()
{
	int year;
	scanf_s("%d", &year,4);
	Is_leapYear(year);
	system("pause");
	return 0;
}
*/