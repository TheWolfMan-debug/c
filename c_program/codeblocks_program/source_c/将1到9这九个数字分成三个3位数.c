
#include <stdio.h>
#include <string.h>
/*
* ��visit������1-9��9�������Ƿ�ȫ�����꣬�Ҳ��ظ�
* ֻ�е�����ȫ�������Ҳ��ظ�ʹ��ʱ���Ͳ�Ϊ9��������
*����������
*/
int main()
{
    int i, j, k, x;
    int visit[10], sum = 0;
    for (i = 123; i * 3 <= 987; i++)
    {
        memset(visit, 0, sizeof(int) * 10);
        visit[i / 100] = 1;
        visit[i / 10 % 10] = 1;
        visit[i % 10] = 1;
        j = i * 2;
        visit[j / 100] = 1;
        visit[j / 10 % 10] = 1;
        visit[j % 10] = 1;
        k = i * 3;
        visit[k / 100] = 1;
        visit[k / 10 % 10] = 1;
        visit[k % 10] = 1;
        sum = 0;
        for (x = 1; x <= 9; x++)
            sum += visit[x];
        if (sum == 9)
            printf("%d,%d,%d\n", i, j, k);
    }
    return 0;
}

