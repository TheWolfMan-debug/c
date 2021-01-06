/*输入一个正整数，要求以相反的顺序输出该数。用递归方法实现。
**输入格式要求："%d" 提示信息："Enter number:"
**输出格式要求："%d"
程序运行示例如下：
Enter number:35567899
99876553*/

#include <stdio.h>

int reverse(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}

int reverse(int n)
{
    if(n/10==0)
    {
        return n;
    }
    else
    {
        printf("%d",n%10);
        return reverse(n/10);
    }
}
