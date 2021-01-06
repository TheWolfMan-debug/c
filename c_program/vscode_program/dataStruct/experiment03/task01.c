// 问题描述：设计一个程序，演示用算符优先法对算术表达式求值的过程。利用算符优先关系，
// 实现对算术四则混合运算表达式的求值。
// （1）输入的形式：表达式，例如2*(3+4)#
//  包含的运算符只能有'+' 、'-' 、'*' 、'/' 、'('、 ')'，“#”代表输入结束符；
// （2）输出的形式：运算结果，例如2*(3+4)=14；
// （3）程序所能达到的功能：对表达式求值并输出。

// 认真阅读与理解实验内容的具体要求，参考教材相关章节，结合实验内容的要求，
// 编写实验程序并上机调试与测试，完成实验报告的撰写。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "EvaluateExpression.h"

int main()
{
    while (1)
    {
        printf("计算结果为：%d\n", EvaluateExpression());
        getchar();
        printf("---------------------\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
