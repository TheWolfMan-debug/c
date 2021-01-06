/*冒泡排序
采用冒泡法进行升序排序法的基本原理是：对数组中的n个数执行n-1遍检查操作，在每一遍执行时，对数组中剩余的尚未排好序的元素进行如下操作：对相邻的两个元素进行比较，若排在后面的数小于排在前面的数，则交换其位置，这样每一遍操作中都将参与比较的数中的最大的数沉到数组的底部，经过n-1遍操作后就将全部n个数按从小到大的顺序排好序了。
#define N 10
程序的某次运行结果如下：
Input n:10↙
Input 10 numbers:2 9 3 4 0 6 8 7 5 1↙
Sorting results:   0   1   2   3   4   5   6   7  8  9

输入格式:"%d"
输出格式：
输入数据个数提示："Input n:"
输入数据提示："Input %d numbers:"
输出提示："Sorting results:"
输出格式："%4d"*/

/*#include <stdio.h>

int main()
{
    int n,i,j;
    int temp;
    printf("Input n:");
    scanf("%d",&n);
    int a[n];
    printf("Input %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorting results:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}*/
#include <stdio.h>
#define N 10
int main()
{
    int a[N]={2,17,8,3,24,53,82,1,29,101};
    int i,j,k,t;
    for(i=0;i<9;i++)
    {
        k=i;
        for(j=i+1;j<10;j++)
            {
            if(a[j]<a[k])
            {
                k=j;
            }
            }
            if(k!=i)
            {
                t=a[k];
                a[k]=a[i];
                a[i]=t;
            }
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}
