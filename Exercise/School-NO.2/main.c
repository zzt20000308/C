#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,*p,*p1,*p2,*p3;
    scanf("%d%d%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(a<b)
    {
        p=p1;
        p1=p2;
        p2=p;
    }
    if(a<c)
    {
        p=p3;
        p3=p1;
        p1=p;
    }
    if(b<c)
    {
        p=p2;
        p2=p3;
        p3=p;
    }
    printf("从小到大排列:%d %d %d\n",*p3,*p2,*p1);
    return 0;
}
