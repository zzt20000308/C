#include <stdio.h>
#include <stdlib.h>

int score(int n)
{
    int a[150],i,j=0,*p;
    p=a;
    printf("输入学生成绩:");
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
    printf("成绩合格的人数:%d\n",j);
    return 0;
}

int main()
{
    int n;
    printf("需要输入成绩的学生个数:");
    scanf("%d",&n);
    int score(int n);
    score(n);
    return 0;
}
