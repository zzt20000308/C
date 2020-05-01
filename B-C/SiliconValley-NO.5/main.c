#include <stdio.h>
#include <stdlib.h>

/*
采用先死后活的方式进行编程和思考，先假定number为某个具体的数，然后再把这个数换成变量
int main()
{
   int i;
   for(i=0;i<6;i++)
   {
       printf("%d+%d=6\n",i,6-i);
   }
}
*/

int main()
{
    int i,number;
    printf("请输入一个整数:");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        printf("%d+%d=%d\n",i,number-i,number);
    }
    return 0;
}

