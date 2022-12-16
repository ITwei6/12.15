#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, i;
//	for (n = 10000;n < 99999;n++)
//	{
//		
//		int sum = 0;
//		for (i = 10;i <= 10000;i = i * 10)
//		{
//			sum = sum + (n % i) * (n / i);
//		}
//		if (n == sum)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 10000;i < 99999;i++)
//    {
//        int sum = 0;
//        for (j = 10;j <= 10000;j = 10 * j)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 5 && n <= 50)
//	{
//		int arr[] = { 0 };
//		int i;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0;i < n - 1;i++)
//		{
//			int j;
//			for (j = 0;j < n - 1 - i;j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//		for (i = 0;i < n;i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	
//	return 0;
//}
//int main()
//{/*
//	char arr[40];
//	int count1 = 0;
//	int count2 = 0;
//	while (scanf("%s", &arr)!=-1)
//	{
//		int i;
//		for (i = 0;;i++)
//		{
//		while (arr[i] != '\0')
//		{
//			
//				if (arr[i] = 'A')
//				{
//					count1++;
//				}
//				else if (arr[i] = 'B')
//				{
//					count2++;
//				}
//				
//			}
//		}
//	}*/
//	char ch;
//	int count1 = 0;
//	int count2 = 0;
//	while (scanf("%c", &ch) != -1)
//	{
//		if (ch == '0')
//		{
//			break;
//		}
//		if (ch == 'A')
//		{
//			count1++;
//		}
//		if (ch == 'B')
//		{
//			count2++;
//		}
//	}
//	if (count1 > count2)
//	{
//		printf("A\n");
//	}
//	else if (count1 < count2)
//	{
//		printf("B\n");
//	}
//	else
//		printf("E\n");
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		if (n >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		if (n > 90 && n < 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		if (n < 60)
//		{
//			printf("Fail\n");
//		}
//		else
//			printf("Pass\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n)!=-1)
//	{
//		if (n % 2 != 0)
//		{
//			printf("Odd\n");
//		}
//		else
//			printf("Even\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i;
//	for (i = 0;i < 3;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1;i <=3;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}