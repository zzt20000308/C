#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0,j=0;i<3;i++,j+=2)
    {
        printf("i=%d,j=%d\n",i,j);
    }
    printf("最终输出结果:i=%d,j=%d\n",i,j);
    printf("\n");

    for(i=0,j=0;i<=3;i++,j+=2)
    {
        printf("i=%d,j=%d\n",i,j);
    }
    printf("最终输出结果:i=%d,j=%d\n",i,j);
    printf("\n");

    for(i=1,j=1;i<3;i++,j+=2)
    {
        printf("i=%d,j=%d\n",i,j);
    }
    printf("最终输出结果:i=%d,j=%d\n",i,j);
    printf("\n");

    for(i=1,j=1;i<=3;i++,j+=2)
    {
        printf("i=%d,j=%d\n",i,j);
    }
    printf("最终输出结果:i=%d,j=%d\n",i,j);
    return 0;
}
