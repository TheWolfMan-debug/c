#include <stdio.h>
int main()
{
    int a,b,c;
    int n,find=0;
    printf("Input a sum:");
    scanf("%d",&n);
    for(a=1;a<10;a++)
        {
            for(b=1;b<10;b++)
            {
                for(c=1;c<10;c++)
                {
                    if(n==100*(a+b*2+c*2)+10*(b+a*2+c*2)+a*2+b*2+c)
                    {
                        find=1;
                        printf("The number is %d\n",a*100+b*10+c);

                    }
                }
            }
        }
        if(find==0)
        {
            printf("The sum you calculated is wrong!\n");
        }
    return 0;
}
/*��һ�����ڻ�����Ϸ�У�ħ��ʦҪÿλ����������һ����λ��abc��a��b��c�ֱ��ǰ�λ��ʮλ�͸�λ���֣���Ȼ��ħ��ʦ�ù������м���acb��bac��bca��cab��cba������Լ���5�����ĺ�ֵ��ֻҪ����˵��������Ƕ��٣���ħ��ʦһ���ܲ³������������ԭ��abc�Ƕ��١����磬���ڼ�˵������ĺ�ֵ��1999����ħ��ʦ����˵�����������443����������˵������ĺ�ֵ��1998����ħ��ʦ˵����������ˣ���������ģ���������ħ����Ϸ��
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"Input a sum:"
**�����ʽҪ��"The sum you calculated is wrong!\n"  "The number is %d\n"
��������ʾ�����£�
Input a sum:1999
The number is 443*/
