#include <stdio.h>
#include <stdlib.h>

int fun(int (*p)[3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",*(*(p+j)+i));
        }
        printf("\n");
    }
}

int main()
{
    int a[3][3];
    int (*p)[3],i,j;
    p=a;
    printf("输入9个整数:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",*(p+j)+i);
        }
    }
    fun(a);
    return 0;
}
