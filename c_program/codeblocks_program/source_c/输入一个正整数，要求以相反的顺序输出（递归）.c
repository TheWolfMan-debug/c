/*����һ����������Ҫ�����෴��˳������������õݹ鷽��ʵ�֡�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter number:"
**�����ʽҪ��"%d"
��������ʾ�����£�
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
