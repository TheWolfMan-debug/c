/*问题 1205: 字符串的修改
时间限制: 1Sec 内存限制: 128MB 提交: 449 解决: 326
题目描述
怎么样，前面的题还可以吧~
依旧是字符串处理，设A和B是两个字符串。我们要用最少的字符操作次数，将字符串A转换为字符串B。这里所说的字符操作共有三种：


1. 删除一个字符；
2. 插入一个字符；
3. 将一个字符改为另一个字符。
对任给的两个字符串A和B，计算出将字符串A变换为字符串B所用的最少字符操作次数。
输入
第一行为字符串A；第二行为字符串B；字符串A和B的长度均小于200。
输出
只有一个正整数，为最少字符操作次数。
样例输入
sfdxbqw
gfdgw

样例输出
4*/

#include <stdio.h>
#include <string.h>
#define N 200

int main()
{
    char a[N],b[N],c[N];
    gets(a);
    gets(b);
    strcpy(c,b);
    //printf("%d\n%d",strlen(a),strlen(b));
    int i,j,k,count,same_char=0;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                same_char++;
                for(k=j;k<strlen(b);k++)
                {
                    b[k]=b[k+1];
                }
                break;
            }
        }
    }
    count=(strlen(a)>strlen(c)?strlen(a)-same_char:strlen(c)-same_char);
    //puts(b);
    printf("%d %d",count);
    return 0;
}
