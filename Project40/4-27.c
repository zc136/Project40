////113--125
////С����ת���ɼ�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 100)
//	{
//		if (n >= 80 && n <= 89)
//			printf("b");
//		if (n >= 70 && n <=79)
//			printf("c"); 
//		if (n >= 60 && n <=69)
//			printf("d");
//		if (n <= 59)
//		{
////			printf("e");
////		}
////	}
////	else
////	{
////		printf("f");
////	}
////	return 0;
////}
////С�����Ƿ񱻽мҳ�
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = a + b + c / 3;
//	if (ret >= 60)
//	{
//		printf("no");
//	}
//	else
//	{
//		printf("yes");
//	}
//	return 0;
//}
////С�����������
//#include<stdio.h>
//int main()
//{
//	int tmp = 0;
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d ", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//
//	}
//	printf("%d", max);
//	return 0;
//}
////ƽ����
//#include<stdio.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	double sum = a + b + c;
//	double ret = sum / 3.0;
//	printf("%.2lf %.2lf", sum, ret);
////
////	return 0;
////}
//////ѧ���
////#include<stdio.h>
////int main()
////{
////	printf("practice makes perfect!");
////	return 0;
////}
////С���ֶ�����
//#include<stdio.h>
//int main()
//{
//	int hour, minute, k, ret;
//	while ((ret = scanf("%d:%d %d", &hour, &minute, &k)) != EOF)
//	{
//		hour = (hour + (minute + k) / 60) % 24;
//		minute = (k + minute) % 60;
//		printf("%d:%d\n", hour, minute);
////	}
////	return 0;
////}
////С�����Ŷӵ���
//#include<stdio.h>
//int main()
//{
//	int n= 0;
//	scanf("%d", &n);
//	if (n<12)
//	{
//		printf("2\n");
//	}
//	else
//	{
//		int ret = n / 12;
//		printf("%d", 2 + ret * 4);
//	}
//	return 0;
////}
////С������ŷ�����
//#include<stdio.h>
//int main()
//{
//	int k, n, x, y, tmp;
//	long long i, j;
//	scanf("%d %d", &i, &j);
//	x = i;
//	y = j;//Ϊ����С��������׼��
//	if (i > j)//������Ϊ����������Ļ����п���i%j==0�����Խ���һ��
//	{
//		tmp = i;
//		i = j;
//		j = tmp;
//	}
//	while (i % j)//��������0����ת���
//	{
//		k = i % j;
//		i = j;
//		j = k;
//	}
//	n = x * y / k;
//	int ret = k + n;
//	printf("%d", ret);
//	return 0;
//}
//С����������
#include <stdio.h>
int main()
{
    int n = 0;
    int arr[100000] = { 0 };//��������
    scanf("%d", &n);
    int i = 0;
    int tmp = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}