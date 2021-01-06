/*冒泡排序法。设有N（N为5）个杂乱无序的整数，要求将这N个整数从小到大排序后输出。
**输入格式要求："%d" 提示信息："Enter No.%2d:"
**输出格式要求："%d"
程序运行示例如下：
Enter No. 1:5
Enter No. 2:7
Enter No. 3:3
Enter No. 4:9
Enter No. 5:8
35789*/

#include <stdio.h>
#define N 5
int main()
{
    int a[N],i,j,temp;
    for(i=0;i<N;i++)
    {
        printf("Enter No.%2d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
