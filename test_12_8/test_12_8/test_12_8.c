#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//1. 将数组A中的内容和数组B中的内容进行交换。
//int main()
//{
//	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	int j = 0;
//
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d", arr1[j]);
//		
//	}
//	printf("\n");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d", arr2[j]);
//
//	}
//
//	
//	system("pause");
//	return 0;
//}
//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//int main()
//{
//    int i = 0;
//	
//	int flag = 1;
//	float s = 0;
//	for (i = 1; i <=100; i ++)
//	{
//		s+= flag*1.0 / i;
//		flag = -flag;
//		
//	}
//	
//	printf("%f\n", s);
//	system("pause");
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i < 10 && i % 10 == 9)
//		{
//			printf("%d ", i);
//		}
//		if (i >= 10 && i % 10 == 9 || i / 10 % 10 == 9)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}