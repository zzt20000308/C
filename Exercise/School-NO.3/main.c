#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],b[5],i,j,*p,*q,*t;

    p=a;
    printf("输入数组a的5个整数:");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }

    q=b;
    printf("输入数组b的5个整数:");
    for(j=0;j<5;j++)
    {
        scanf("%d",q+j);
    }

    t=p;
    p=q;
    q=t;

    printf("交换数组后数组a为:");
    for(i=0;i<5;i++)
    {
        printf("%3d",*(p+i));
    }
    printf("\n");

    printf("交换数组后数组b为:");
    for(j=0;j<5;j++)
    {
        printf("%3d",*(q+j));
    }
    printf("\n");

    return 0;
}
