/*��������Ӣ�ĵ����ڼ���ͨ���������ڱ�������Ӧ�����֣�
���鵽��β����δ�ҵ��������������ʾ��Ϣ��
**�����ʽҪ��"%s" ��ʾ��Ϣ��"Please enter a string:\n"
**�����ʽҪ��"%s is %d\n" "Not found!\n"
���ұ�����Ϣ��
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
��������ʾ��1���£�
Please enter a string:
Monday
Monday is 1
��������ʾ��2���£�
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
