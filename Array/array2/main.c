#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum,a[100];
    float avg;
    while(scanf("%d",&n))//�����һ��n
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);//����ڶ�������
            sum+=a[i];//���
            avg=sum*1.0/i;//��ƽ��
        }
        printf("sum=%d,avg=%.2f\n",sum,avg);
    }
    return 0;
}
