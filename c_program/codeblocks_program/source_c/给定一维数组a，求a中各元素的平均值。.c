/*����һά����a����a�и�Ԫ�ص�ƽ��ֵ��
a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9}
**�����ʽҪ��"The average of array is %f\n"
��������ʾ�����£�
The average of array is 1.450000*/

#include <stdio.h>
int main()
{
    float a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};
    int i;
    float sum=0;
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    printf("The average of array is %f\n",sum/10);
    return 0;
}
