#include <stdio.h>
#include <stdlib.h>

int main()
{
    char I[50],*p;
    int i,A,a,b,c,d;
    A=a=b=c=d=0;
    gets(I);
    p=I;
    for(i=0;I[i]!='\0';i++)
    {
        if(*(p+i)>='A'&&*(p+i)<='Z')
            A=A+1;
        else if(*(p+i)>='a'&&*(p+i)<='z')
            a=a+1;
        else if(*(p+i)==' ')
            b=b+1;
        else if(*(p+i)>='0'&&*(p+i)<='9')
            c=c+1;
        else
            d=d+1;
    }
    printf("´óÐ´×ÖÄ¸:%d\n,Ð¡Ð´×ÖÄ¸:%d\n,¿Õ¸ñ:%d\n,Êý×Ö:%d\n,ÆäËû×Ö·û:%d\n",A,a,b,c,d);
    return 0;
}
