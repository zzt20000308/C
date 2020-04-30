#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum,a[100];
    float avg;
    while(scanf("%d",&n))//输入第一行n
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);//输入第二行数组
            sum+=a[i];//求和
            avg=sum*1.0/i;//求平均
        }
        printf("sum=%d,avg=%.2f\n",sum,avg);
    }
    return 0;
}
