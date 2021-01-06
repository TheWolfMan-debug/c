#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "Stack.h"

//计算操作
OperandType Operate(char a, char theta, char b);
//判断是否为运算符
int In(char c);
//获取theta所对应的索引
int getIndex(char theta);
//获取theta1与theta2之间的优先级
char getPriority(char theta1, char theta2);

OperandType Operate(char a, char theta, char b)
{
    int IntA = a - 48;
    // printf("IntA = %d\n", IntA);
    int IntB = b - 48;
    // printf("IntB = %d\n", IntB);

    switch (theta)
    {
    case '+':
        return IntA + IntB + 48;
        break;
    case '-':
        return IntA - IntB + 48;
        break;
    case '*':
        return IntA * IntB + 48;
        break;
    case '/':
        if (IntB == 0)
        {
            printf("Divide by zero!!!\n");
            exit(ERROR);
        }
        else
        {
            return IntA / IntB + 48;
        }
        break;
    default:
        break;
    }
}

int In(char c)
{
    int index = 0;
    switch (c)
    {
    case '+':
        index = 7;
        break;
    case '-':
        index = 1;
        break;
    case '*':
        index = 2;
        break;
    case '/':
        index = 3;
        break;
    case '(':
        index = 4;
        break;
    case ')':
        index = 5;
        break;
    case '#':
        index = 6;
        break;
    default:
        break;
    }
    return index;
}

int getIndex(char theta) //获取theta所对应的索引
{
    int index = 0;
    switch (theta)
    {
    case '+':
        index = 0;
        break;
    case '-':
        index = 1;
        break;
    case '*':
        index = 2;
        break;
    case '/':
        index = 3;
        break;
    case '(':
        index = 4;
        break;
    case ')':
        index = 5;
        break;
    case '#':
        index = 6;
    default:
        break;
    }
    return index;
}

char getPriority(char theta1, char theta2) //获取theta1与theta2之间的优先级
{
    const char priority[][7] = //算符间的优先级关系
        {
            {'>', '>', '<', '<', '<', '>', '>'},
            {'>', '>', '<', '<', '<', '>', '>'},
            {'>', '>', '>', '>', '<', '>', '>'},
            {'>', '>', '>', '>', '<', '>', '>'},
            {'<', '<', '<', '<', '<', '=', '0'},
            {'>', '>', '>', '>', '0', '>', '>'},
            {'<', '<', '<', '<', '<', '0', '='},
        };

    int index1 = getIndex(theta1);
    int index2 = getIndex(theta2);
    return priority[index1][index2];
}

OperandType EvaluateExpression()
{
    // 算术表达式求值的算符优先法。设OPTR和POEN分别为运算符栈和运算数栈
    // OP为运算符集合
    SqStack OPTR;
    SqStack OPND;
    InitStack(&OPTR);
    Push(&OPTR, '#');
    InitStack(&OPND);
    SElemType c = getchar();
    SElemType x = '0';
    SElemType theta = '+';
    SElemType a = '0';
    SElemType b = '0';
    while (c != '#' || GetTop(OPTR) != '#')
    {
        // 不是运算符则进栈
        if (!In(c))
        {
            int cInt = c - 48;
            while (1)
            {
                c = getchar();
                if (In(c))
                {
                    Push(&OPND, cInt + 48);
                    break;
                }
                cInt *= 10;
                cInt += (int)(c - 48);
                printf("cInt:%d\n",cInt);
            }

            // Push(&OPND, c);
            // c = getchar();
        }
        if(In(c))
        {
            // 判断运算符优先权
            switch (getPriority(GetTop(OPTR), c))
            {
            case '<':
                Push(&OPTR, c);
                c = getchar();
                break;
            case '=':
                Pop(&OPTR, &x);
                c = getchar();
                break;
            case '>':
                Pop(&OPTR, &theta);
                Pop(&OPND, &b);
                Pop(&OPND, &a);
                Push(&OPND, Operate(a, theta, b));
                break;
            }
        }
    }
    return GetTop(OPND) - 48;
}