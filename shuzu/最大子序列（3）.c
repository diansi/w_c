#include<stdio.h>
int maxzixulie(int a[30]);
int main(void)
{
	int i, a[30], max;
	for (i = 0; i < 30; i++)
		scanf_s("%d",&a[30]);
	max = maxzixulie(a[30]);
	printf("%d",max);
	system("pause");
	return 0;
}

int maxzixulie(int a[30])
{
	int i;
	int thissum  = 0,maxsum=0;
	for (i = 0; i < 30; i++)
	{
		thissum += a[i];
		if (thissum > maxsum)
			maxsum = thissum;
		else if (thissum < 0)
			thissum = 0;
	}
	return maxsum;
}
