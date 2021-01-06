// 给定一个整数数组 nums 和一个目标值 target，请你在该数组中
//找出和为目标值的那 两个 整数，并返回他们的数组下标。

// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

//  

// 示例:

// 给定 nums = [2, 7, 11, 15], target = 9

// 因为 nums[0] + nums[1] = 2 + 7 = 9
// 所以返回 [0, 1]

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/two-sum
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int array[N],n=0,i=0,j,sum,flag=0;

    while(scanf("%d",&array[i]))
    {
        i++;
        n++;
    }

    getchar();

    scanf("%d",&sum);

    // for(i=0;i<n;i++)
    // {
    //     printf("%3d",array[i]);
    // }
    // printf("\n");
    // printf("%d\n",sum);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]+array[j]==sum)
            {
                printf("[%d %d]\n",i,j);
                flag=1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    

    system("pause");
    return 0;
}