/*给定一维数组a，求a中各元素的平均值。
a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9}
**输出格式要求："The average of array is %f\n"
程序运行示例如下：
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
