#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100],n;//定义数值，中括号里面指的是长度
    while(scanf("%d",&n))//这是第一行的输入
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);//这是第二行的输入
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&b[i]);//这是第三行的输入
        }
        for(int i=1;i<=n;i++)
        {
            c[i]=a[i]*b[i];//在这里我们重新写一个数值c[]
            printf("%-8d",c[i]);//输出的是第二行和第三行的数上下相乘
        }
        printf("\n");//换行
    }
    return 0;
}
