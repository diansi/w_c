#include<stdio.h>
int maxzixulie(int A[30]);
int main(void)
{
	int A[30];
	int i,max;
	printf("请输入您要求取的序列：");
	for (i = 0; i < 30; i++)
	{
		scanf_s("%d",A[i]);
	}
	max = maxzixulie(A[30]);
	system("pause");
	return 0;

}
int maxzixulie(int A[30])
{
	int i, j, k;
	int thismax, max=0;
	for (i = 0; i < 30; i++)
	{
		for (j = i; j < 30; j++)
			thismax = 0;
		for (k = i; k <= j; k++)
			thismax += A[k];
		if (thismax > max)
			max = thismax;
			
	}
	return max;
}