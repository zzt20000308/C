#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0,j=0;i<=3;i++,j+=2)
    {
        printf("i=%d,j=%d\n",i,j);
    }
    printf("\n");
    printf("×îºóÊä³ö:i=%d,j=%d\n",i,j);
    return 0;
}
