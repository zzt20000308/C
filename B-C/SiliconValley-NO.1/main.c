#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	double d1;
	printf("请输入成绩:");
	scanf("%lf",&d1);
	if(0<=d1&&d1<=100)
    {
		printf("成绩合理,请再次输入成绩:");
    }
	else
    {
		printf("成绩不合理,请重新输入成绩:");
    }
	scanf("%lf",&d1);
	switch((int)(d1/60))
	{
	case 1:
		printf("合格\n");
		break;
	case 0:
		printf("不合格\n");
		break;
	}
	return 0;
}
*/

int main()
{
	double d1;
	printf("请输入成绩:");
	scanf("%lf",&d1);
	if(0<=d1&&d1<=100)
	{
		if(0<=d1&&d1<=60)
		{
			printf("不合格\n");
		}
		else
		{
			printf("合格\n");
		}
	}
	else
	{
		printf("成绩不合理\n");
	}
	return 0;
}
