/*��̴�ӡ����ͼ��
��̴�ӡ����ͼ����
   ******
  ******
 ******
******   */

#include <stdio.h>
#define N 6 //*������
#define M 4 //����
#define J 3 //' '������ j-n>=-1 ��һ�е�����
int main()
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<J-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<N;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
