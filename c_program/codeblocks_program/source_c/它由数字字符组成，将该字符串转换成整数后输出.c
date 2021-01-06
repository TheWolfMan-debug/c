#include <stdio.h>
int main()
{
    char a[10];
    int i,n=0;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    int b[n];
    printf("digit = \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]-48);
    }

    return 0;
}
/*输入一个以回车结束的字符串（少于10个字符），它由数字字符组成，将该字符串转换成整数后输出。注意，不能直接调用库函数atoi完成。
**输入提示信息："Enter a string: "
**输出格式要求："digit = %d\n"
程序运行示例如下：
Enter a string: 123
digit = 123*/
