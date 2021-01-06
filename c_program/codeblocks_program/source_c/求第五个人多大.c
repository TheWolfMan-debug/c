/*有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
**输出格式要求："%d"*/

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
