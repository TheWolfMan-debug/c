/*��ָ����ʵ��3X4�Ķ�ά�����Ԫ�ض����Լ���˶�ά��������ֵ�����ֵ�±�
�������º���ʵ�֣�*/
//void Input(int *p,int m, int n);  /*����Ԫ�ض��뺯��*/
//int FindMax(int *p, int m, int n, int *pRow, int *pCol);  /*�����ֵ���±꺯��*/

//***������ʾ��Ϣ��"Please input your data:\n"
//***�����ʽҪ���޸�ʽҪ��
//***�����ʽҪ��"The maximum is %d, which is in row %d, colum %d\n"


/*������

Please input your data:
**����������
3 5 2 7 1 6 12 11 4 10 8 9
**���������
The maximum is 12, which is in row 1, colum 2*/

#include <stdio.h>

void Input(int *p,int m, int n);
int FindMax(int *p, int m, int n, int *pRow, int *pCol);

int main()
{
    int m=2,n=2;
    int array[m*n];
    int *p=array;
    int *pRow=NULL,*pCol=NULL;
    Input(p,m,n);
    FindMax(p,m,n,pRow,pCol);
    return 0;
}

void Input(int *p,int m, int n)
{
    int i,j;
    printf("Please input your data:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[i*n+j]);
        }
    }
}

int FindMax(int *p, int m, int n, int *pRow, int *pCol)
{
    int max=*p;
    int i,j;
    int i1,j1;
    pRow=&i1,pCol=&j1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max<p[i*n+j])
            {
                max=p[i*n+j];
                *pRow=i;
                *pCol=j;
            }
        }
    }
    printf("The maximum is %d, which is in row %d, colum %d\n",max,*pRow,*pCol);
}
