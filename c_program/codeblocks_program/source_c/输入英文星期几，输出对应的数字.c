/*任意输入英文的星期几，通过查找星期表，输出其对应的数字，
若查到表尾，仍未找到，则输出错误提示信息。
**输入格式要求："%s" 提示信息："Please enter a string:\n"
**输出格式要求："%s is %d\n" "Not found!\n"
查找表中信息：
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
程序运行示例1如下：
Please enter a string:
Monday
Monday is 1
程序运行示例2如下：
Monkey
Not found!*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[7][10]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char str1[10];
    int i;
    int flag=0;
    printf("Please enter a string:\n");
    scanf("%s",str1);
    for(i=0;i<7;i++)
    {
        if(strcmp(str[i],str1)==0)
        {
            if(i==0)
            {
                printf("%s is %d\n",str[i],7);
            }
            else{
                printf("%s is %d\n",str[i],i);
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Not found!\n");
    }
    return 0;
}
