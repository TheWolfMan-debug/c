/*求复数之积。利用结构变量求解两个复数之积。

za={3,4}, zb={5,6}

za={10,20}, zb={30,40}
**输出格式要求："(%d+%di)*(%d+%di)=" "(%d+%di)\n"
程序运行示例如下：
(3+4i)*(5+6i)=(-9+38i)
(10+20i)*(30+40i)=(-500+1000i)*/

#include <stdio.h>

typedef struct fushu
{
    int za[2];
    int zb[2];
}FU;

int main()
{
    FU a,b;
    a.za[0]=3,a.za[1]=4;
    a.zb[0]=5,a.zb[1]=6;
    b.za[0]=10,b.za[1]=20;
    b.zb[0]=30,b.zb[1]=40;
    int d1,d2,d3,d4;

    d1=a.za[0]*a.zb[0]-a.za[1]*a.zb[1];
    d2=a.za[1]*a.zb[0]+a.za[0]*a.zb[1];
    d3=b.za[0]*b.zb[0]-b.za[1]*b.zb[1];
    d4=b.za[1]*b.zb[0]+b.za[0]*b.zb[1];
    printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",a.za[0],a.za[1],a.zb[0],a.zb[1],d1,d2);
    printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",b.za[0],b.za[1],b.zb[0],b.zb[1],d3,d4);
    return 0;
}
