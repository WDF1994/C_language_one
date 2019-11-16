#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include <ctype.h>
//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
void printf_array(int* ar, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}
void reverse(int* ar, int n) {
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int tmp = ar[right];
		ar[right] = ar[left];
		ar[left] = tmp;
		left += 1;
		right -= 1;
	}
}
int main() {
	int ar[] = {1,2,3,4,5,6,7};
	int n = sizeof(ar) / sizeof(ar[0]);
	printf_array(ar,n);
	reverse(ar,n);
	printf_array(ar, n);
	system("pause");
	return 0;
}
/*
//5.ʵ��һ���������ж�һ�����ǲ���������
void Isprime_num(int input) {
int i;
for ( i = 2; i <= sqrt(input); i++) {
if (input%i == 0) {
printf("%d��������\n", input);
break;
}
}
if (i >= sqrt(input)) {
printf("%d������\n", input);
}
}
int main() {
int input;
scanf_s("%d", &input);
Isprime_num(input);
system("pause");
return 0;
}



//3.ʵ��һ�������ж�year�ǲ������ꡣ
void Isleap_year(int year) {
	if (year % 4 == 0) {
		if (year % 100 != 0) {
			printf("%d������\n", year);
		}
		else if (year % 400 == 0) {
			printf("%d������\n", year);
		}
		else {
			printf("%d��������\n", year);
		}
	}
	else {
		printf("%d��������\n", year);
	}
}
int main() {
	printf("��ʼ������ݣ������0����\n");
	while(1){
		printf("��������ݣ�");
		int year;
		scanf_s("%d", &year);
		if (year == 0) {
			break;
		}
		Isleap_year(year);
		
	}
	system("pause");
	return 0;
}


//2.ʹ�ú���ʵ���������Ľ�����
void sawp(int* pa,int* pb) {
	int tmp = *pb;
	*pb = *pa;
	*pa = tmp;
}
int main() {
	int a = 0;
	int b = 1;
	sawp(&a,&b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
void multi_table(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
}
int main() {
	int n;
	scanf_s("%d", &n);
	multi_table(n);
	system("pause");
	return 0;
}


int main() {
	char arr1[] = "bit";
	char arr2[] = { 'b','i','t'};
	char arr3[] = { 'b','i','t','\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	system("pause");
	return 0;
}

//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
int main() {
	char input;
	printf("�������ַ���");
	scanf_s("%c", &input);
	if (islower(input)) {
		putchar(toupper(input));
	}
	else if (isupper(input)) {
		putchar(tolower(input));
	}
	else if (isdigit(input)) {
	}
	printf("\n");
	system("pause");
	return 0;
}


//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
int main() {
	int key = 122354;
	int a = 0;
	int input = 0;
	while (1) {
		printf("���������룺");
		scanf_s("%d",&input);
		if (input == key) {
			printf("��½�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
			a = a + 1;
		}
		if (a == 3) {
			printf("�����Ѵ����ޣ��˳�����\n");
			break;
		}
	}
	system("pause");
	return 0;
}

//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰����
int bin_search(int* ar,int n,int key) {
	int left = 0;
	int right = n - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key < ar[mid]) {
			right = mid - 1;
		}
		else if(key > ar[mid]) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	if (left > right) {
		return -1;
	}
}
int main() {
	int key = 11;
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(ar) / sizeof(ar[0]);
	int ret = bin_search(ar, n, key);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//��������Ϸ��ʵ��
void menu() {
	printf("*************************\n");
	printf("********����������*******\n");
	printf("********1.��ʼ��Ϸ*******\n");
	printf("********2.������Ϸ*******\n");
	printf("*************************\n");
}
void game() {
	int random_num = rand() % 100 + 1;//ȥ100���ڵ����� ģ100 �Ϳ������ټ�1
	int input = 0;
	while (1) {
		printf("���������֣�");
		scanf_s("%d", &input);
		if (input > random_num) {
			printf("���˴���\n");
		}
		else if(input < random_num){
			printf("С��С��\n");
		}
		else {
			printf("��ϲ���¶���\n");
			break;
		}
	}
}
int main() {
	menu();
	int input=0;
	srand((unsigned)time(NULL));
	while(1){
		printf("���������֣�");
		scanf_s("%d", &input);
		if (input == 1) {
			printf("��ʼ��Ϸ\n");
			game();
			break;
		}
		else if (input == 2) {
			printf("��Ϸ����\n");
			break;
		}
		else {
			printf("������Ч,���������\n");
		}
	}
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
		else if (input == 2) {
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