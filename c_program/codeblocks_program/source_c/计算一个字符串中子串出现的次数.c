/*用函数编程实现计算字符串中子串出现的次数。
函数原型：
int FindString(char *str,char *sub)
要求：
在主函数中输入字符串和子串，调用FindString()函数，输出子串出现的次数。*/

#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char main[N],child[N];
    int i,j,k,flag,ca,cb,count=0;
    gets(main);
    gets(child);
    ca=strlen(main),cb=strlen(child);
    for(i=0;i<ca;i++)
    {
        flag=1;
        k=i;
        for(j=0;j<cb;j++)
        {
            if(main[k]!=child[j])
            {
                flag=0;
                break;
            }
            k++;
        }
        if(flag)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
