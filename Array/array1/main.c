#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100],n;//������ֵ������������ָ���ǳ���
    while(scanf("%d",&n))//���ǵ�һ�е�����
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);//���ǵڶ��е�����
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&b[i]);//���ǵ����е�����
        }
        for(int i=1;i<=n;i++)
        {
            c[i]=a[i]*b[i];//��������������дһ����ֵc[]
            printf("%-8d",c[i]);//������ǵڶ��к͵����е����������
        }
        printf("\n");//����
    }
    return 0;
}
