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
    printf("大写字母:%d\n小写字母:%d\n空格:%d\n数字:%d\n其他字符:%d\n",A,a,b,c,d);
    return 0;
}

