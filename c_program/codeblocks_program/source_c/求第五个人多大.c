/*��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
**�����ʽҪ��"%d"*/

#include <stdio.h>

int makeyear(int fiveyear);

int main()
{
    int fiveyear=5;
    int firstyear;
    firstyear=makeyear(fiveyear);
    printf("%d",firstyear);
    return 0;
}

int makeyear(int fiveyear)
{
    if(fiveyear==1)
    {
        return 10;
    }
    else
    {
        return makeyear(fiveyear-1)+2;
    }
}
