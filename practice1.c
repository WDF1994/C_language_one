#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <stdio.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
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


//1.����Ļ���������ͼ����
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


//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
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


//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
int main() {
	double sum = 0.0;
	for (int i = 1; i <= 100; i++) {
		sum += pow(-1, i + 1)*1.0 / i;//ע������Ҫ�õ�1/2=0.5��
		                              //��Ҫ�ڽ��������ͳ�������Ϊdouble��float
	}
	
	printf("%lf\n", sum);
	system("pause");
	return 0;
}

//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//��������Ϸ��ʵ��
void menu() {
	printf("**************************\n");
	printf("*********1.��ʼ��Ϸ*******\n");
	printf("*********2.�˳�***********\n");
	printf("**************************\n");
}
void game() {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("������µ����֣�");
		scanf_s("%d", &input);
		if (input > random_num) {
			printf("�´���\n");
		}
		else if (input < random_num) {
			printf("��С��\n");
		}
		else {
			printf("��ϲ���¶���\n");
			break;
		}
	}
}
int main() {
	int input = 0;
	menu();
	while (1) {
		
		printf("��ѡ��:");
		scanf_s("%d", &input);
		if (input == 1) {
			game();
			break;
		}
		else if(input == 2){
			break;
		}
		else {
			printf("�����������������룡\n");
		}
	}

	printf("�˳���Ϸ���ټ�\n");
	system("pause");
	return 0;
}

//5.�������������Լ����
int main() {
	int a, b;
	printf("����������������");
	scanf_s("%d%d",&a, &b);
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}

	}
	printf("a��b�����Լ��Ϊ��%d", a);

	printf("\n");
	system("pause");
	return 0;
}

//4.�����������Ӵ�С�����
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

//3.��10 �����������ֵ��
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
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
//��һ�ַ�����ֱ�ӽ���ֵ
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
//�ڶ��ַ�����ʹ�ô���ָ����н���ֵ
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
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
//���100��200 ֮���������Ҳ����������ֻ�ܱ�1��������������
int main()
{
	int i, j;
	for ( i = 101; i <= 200; i++) {
		int t = sqrt(i);

		for ( j = 2; j <= t; j++) {
			if (i%j == 0) {//��i�ܹ���˭����
				break;//�������������ֹͣ�������������
			}
		}
		if (j > t) {
			printf("%d ", i);//����������û���ܹ�����i����
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
//1. �����������α�����ֵ��������ֵ�����ݽ��н���(��ʹ���м����)
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
//�ж�1000��---2000��֮�������
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

//����˷��ھ���
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


//����һ������һ��
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
//������ж�
void Is_leapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d��������\n", year);
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