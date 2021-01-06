/*【程序功能】对N行N列二维数组的每一行排序，偶数行（0当作偶数）由小到大排序，奇数行由大到小排序。 下面程序中存在比较隐蔽的错误，请通过分析和调试程序，发现并改正程序中的错误。 注意：请将修改正确后的完整源程序拷贝粘贴到答题区内。 对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。 改错时不能改变程序原有的意图，不能改变函数原型。
【含有错误的源程序】*/
#include <stdio.h>
#define N 4
void swap(int *p1, int *p2)
{
	int p;
	p=*p1;*p1=*p2;*p2=p;
}

void sort(int a[N][N])
{
int i,j,k;
	for(i=0;i<N;i++)
		for(j=0;j<N-1;j++)
			for(k=j+1;k<N;k++)
				if(i%2==0?a[i][j]<a[i][k]:a[i][j]>a[i][k])
					swap(a[i]+j,a[i]+k);

}
void main()
{
	int a[N][N]={{3,4,2,1},{8,7,5,6},{12,10,11,9},{15,14,16,13}};
	int i,j;
	sort(a);
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
}
