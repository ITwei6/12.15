#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	//�ж���������Ƿ�Ϊ�������У�
//	int i;
//	int flag1 = 0;//��ǩ����Ĭ��������
//	int flag2 = 0;//������ʾ����
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i - 1] < arr[i])
//			{
//				flag1 = 1;
//			}
//			else if(arr[i-1]>arr[i])
//			{
//				flag2 = 1;
//			}//���arrǰһ�����ں�һ����ôflag1flag2��Ϊ0��
//
//		}// 3 2 1 1 2 1
//	}
//	if (flag1 + flag2 < 2)
//	{
//		printf("sorted\n");
//	}
//	else
//		printf("unsorted\n");
//	return 0;
//}
//int main()
//{
//	//���������������У�Ȼ��ϲ���һ���������д�ӡ
//	int arr1[100];
//	int arr2[100];
//	int arr3[200];
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int j;
//	int k = 0;
//	for (j = 0;j < m;j++)
//	{
//		scanf("%d", &arr2[j]);
//		
//	}
//	i = 0;
//	j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	if (i == n)
//	{
//		while (j<m)
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	else if(j==m)
//	{
//		while (i < n)
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//	}
//	for (k = 0;k < n + m;k++)
//	{
//		printf("%d ", arr3[k]);
//	}
//	return 0;
//}
//�����Ǿ����жϺ;����жϣ�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10][10];
//	int flag = 0;//��ǩ��Ĭ���������Ǿ���
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j <n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j)
//			{
//				if (arr[i][j] != 0)
//					flag = 1;
//			}
//		}
//	}
//	if (flag == 1)
//		printf("No\n");
//	else
//		printf("Yes\n");
//	return 0;
//}
int main()
{
	
	return 0;
}
