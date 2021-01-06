#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    p=(int *)malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("array[i]=%d\n",i*10);
    }
    return 0;
}
/*产生动态数组，编写程序，输入数组大小后，通过动态分配内存函数malloc产生数组。
**输入格式要求："%d" 提示信息："Enter array size:"
**输出格式要求："array[%d]=%d\n"
程序运行示例如下：
Enter array size:8
array[0]=0
array[1]=10
array[2]=20
array[3]=30
array[4]=40
array[5]=50
array[6]=60*/
