/*编写函数，通过指针连接两个字符串。
**输入格式要求："%s" 提示信息："Enter string 1:" "Enter string 2:"
**输出格式要求："a+b=%s\n"
程序运行示例如下：
Enter string 1:happy
Enter string 2:hollween
a+b=happyhollween*/

#include <stdio.h>
#define N 100

int main()
{
    char a[N],b[N];
    char *pa=a,*pb=b;
    printf("Enter string 1:");
    scanf("%s",a);
    printf("Enter string 2:");
    scanf("%s",b);
    while(*pa)
    {
        pa++;
    }
    while(*pb)
    {
        *pa=*pb;
        pa++;
        pb++;
    }
    *pa='\0';
    printf("a+b=%s\n",a);
    return 0;
}
