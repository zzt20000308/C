#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("«Î ‰»Î‘¬∑›:");
    scanf("%d",&month);
    switch(month)
    {
    case 3:
    case 4:
    case 5:
        printf("¥∫ºæ\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("œƒºæ\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("«Ôºæ\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("∂¨ºæ\n");
        break;
    }
    return 0;
}
