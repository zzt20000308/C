#include <stdio.h>
#include <stdlib.h>

int score(int n)
{
    int a[150],i,j=0,*p;
    p=a;
    printf("����ѧ���ɼ�:");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
        {
         if(*(p+i)>=60)
            {
             j++;
            }
        }
    printf("�ɼ��ϸ������:%d\n",j);
    return 0;
}

int main()
{
    int n;
    printf("��Ҫ����ɼ���ѧ������:");
    scanf("%d",&n);
    int score(int n);
    score(n);
    return 0;
}
