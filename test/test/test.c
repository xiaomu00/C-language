#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a, b, sum;

	scanf("%d  %d", &a, &b);
	sum = a + b;
	printf("mus=%d\n", sum);
	return 0;

}


/*
计算两数和
int main()
{
int a,b,sum;

scanf("%d  %d",&a,&b);
sum = a + b;
printf("mus=%d\n",sum);
return 0;
}
*/

/*
计算数据类型大小
int main()
{
printf("%d\n", sizeof(char));
printf("%d\n", sizeof(int));
printf("%d\n", sizeof(short));
printf("%d\n", sizeof(long));
printf("%d\n", sizeof(long long));
printf("%d\n", sizeof(float));
printf("%d\n", sizeof(double));
return 0;
}
*/