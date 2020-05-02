#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//提示：<string.h>有一个strcmp函数，判断两个字符串是否相同。
//int strcmp(const char *str1, const char *str2)=>把 str1所指向的字符串和 str2所指向的字符串进行比较。返回0 表示相等，非0表示不相等。

int main()
{
    char name[20];//此处的nane[20]也可以写成name[20]=""（空字符）
    while(strcmp(name,"zzt")!=0)
    {
        printf("请输入名字:");
        scanf("%s",&name);//此处的&name可以不加&，因为数组的名称就是地址
        if(strcmp(name,"zzt")!=0)
        {
            printf("名字错误，请重新输入\n");
            printf("\n");
        }
    }
    printf("名字正确\n");
    return 0;
}
