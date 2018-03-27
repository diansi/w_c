#include<stdio.h>
int maxzixulie(int a[30]);
int main(void)
{
	int a[30];
	int i,max;
	for(i=0;i<30;i++)
	   scanf_s("%d",&a[i]);
	max = maxzixulie(a[30]);
	printf("%d",max);
	system("pause");
	return 0;
}
int maxzixulie(int a[30])
{
	int i, j;
	int thissum, maxsum=0;
	for (i = 0; i < 30; i++)
	{
		thissum = 0;
		for (j = i; j < 30; j++)
			thissum += a[j];
		if (thissum > maxsum)
			maxsum = thissum;
	}
	return maxsum;
}