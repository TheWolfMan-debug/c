/*����һ��������n (1��n��6)��������ʽ����1��n*n�ķ��󣨶�ά�����ţ���
a[i][j] = i * n + j + 1��0��i��n-1��0��j��n-1��
Ȼ�󽫸÷���ת�ã����л������������
ע�⣺ԭ�����ת�÷�����ͬһ����ά�����š�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter n: "
**�����ʽҪ��"%4d"
�Ծ�������Ҫ��������֮��Ϊ%4d��������֮��Ϊ\n
��������ʾ�����£�
Enter n: 3
   1   4   7
   2   5   8
   3   6   9
*/

#include <stdio.h>

#define N 6

int createarray(int n,int oldarray[N][N]);
int newarray(int n,int oldarray[N][N]);

int main()
{
    int n;//����ı߳�
    int oldarray[N][N];
    printf("Enter n: ");//��ʾ���
    scanf("%d",&n);
    createarray(n,oldarray);
    newarray(n,oldarray);
    return 0;
}

int createarray(int n,int oldarray[N][N])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            oldarray[i][j] = i * n + j + 1;
        }
    }
    return 0;
}

int newarray(int n,int oldarray[N][N])
{
    int i,j;
    int a;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            a=oldarray[i][j];
            oldarray[i][j]=oldarray[j][i];
            oldarray[j][i]=a;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",oldarray[i][j]);
        }
        printf("\n");
    }
}

//
