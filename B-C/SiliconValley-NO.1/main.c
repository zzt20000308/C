#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	double d1;
	printf("������ɼ�:");
	scanf("%lf",&d1);
	if(0<=d1&&d1<=100)
    {
		printf("�ɼ�����,���ٴ�����ɼ�:");
    }
	else
    {
		printf("�ɼ�������,����������ɼ�:");
    }
	scanf("%lf",&d1);
	switch((int)(d1/60))
	{
	case 1:
		printf("�ϸ�\n");
		break;
	case 0:
		printf("���ϸ�\n");
		break;
	}
	return 0;
}
*/

int main()
{
	double d1;
	printf("������ɼ�:");
	scanf("%lf",&d1);
	if(0<=d1&&d1<=100)
	{
		if(0<=d1&&d1<=60)
		{
			printf("���ϸ�\n");
		}
		else
		{
			printf("�ϸ�\n");
		}
	}
	else
	{
		printf("�ɼ�������\n");
	}
	return 0;
}
