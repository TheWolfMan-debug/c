/*输入字符串，包含：字母、数字、标点符号，以及空格字符，并将其逆序输出。
例如，当输入字符串为“I am a student.”,输出为“.tneduts a ma I”，假设字符数组最大长度为30。
输入提示信息："Please Enter String1:\n"
输入格式：gets()
输出格式："Result is:\n%s\n"


程序运行结果示例：
Please Enter String1:
I am a student.↙
Result is:
.tneduts a ma I*/

#include <stdio.h>
#include <string.h>
#define N 30

int main()
{
    char a[N],b[N];
    int i,j;
    printf("Please Enter String1:\n");
    gets(a);
    for(j=strlen(a)-1,i=0;i<strlen(a);i++,j--)
    {
        b[i]=a[j];
    }
    b[i]='\0';
    printf("Result is:\n%s\n",b);
    return 0;
}
