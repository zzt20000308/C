#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int number=0;
    int sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%9==0)
        {
            number++;
            sum+=i;
        }
    }
    printf("个数:%d,总和:%d\n",number,sum);
    return 0;
}
