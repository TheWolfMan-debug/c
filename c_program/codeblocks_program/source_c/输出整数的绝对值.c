/*���������������ľ���ֵ��
**�����ʽҪ��"%d" ��ʾ��Ϣ��"input the value of x:"
**�����ʽҪ��"|x|=%d\n"
��������ʾ�����£�
input the value of x:68
|x|=68*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("input the value of x:");
    scanf("%d",&n);
    printf("|x|=%d\n",abs(n));
    return 0;
}
