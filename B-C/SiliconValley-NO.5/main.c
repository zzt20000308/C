#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   for(i=0;i<6;i++)
   {
       printf("%d+%d=6\n",i,6-i);
   }
}

/*
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
*/
