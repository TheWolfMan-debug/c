#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int *s;   //栈元素
    int size; //栈大小
    int top;  //当前栈顶
} Sqstack;
void InitStack(Sqstack *s);   //初始化栈
void Push(Sqstack *s, int e); //入栈函数
void Pop(Sqstack *s);         //出栈函数
int Top(Sqstack *s);
void DestoryStack(Sqstack *s);             //销毁栈s
void Manage(Sqstack *s, int index, int n); //当前处理位置index的元素
void Input();                              //输入模块
void Show();                               //读取历史计算
void A();                                  //操作界面
int main()
{
    char key;
    while (1)
    {
        A();
        scanf("%c", &key);
        fflush(stdin);
        switch (key)
        {
        case '1':
            Input();
            system("pause");
            break;
        case '2':
            Show();
            system("pause");
            break;
        case '3':
            printf("\n    谢谢使用!\n");
            exit(0);
        default:
            printf("输入错误，请重新输入指令“1，2，3”\n");
            putchar('\n');
        }
    }
}
void A() //操作界面
{
    system("cls"); //清屏
    printf("-----------------------欢迎使用车厢调度系统-----------------------\n");
    putchar('\n');
    printf("       车厢调度操作指令：\n");
    printf("              ---------------------------------\n");
    printf("              |    1   |   输入车厢数目       |\n");
    printf("              |    2   |   显示历史调度结果   |\n");
    printf("              |    3   |   退出               |\n");
    printf("              ---------------------------------\n");
    printf("\n请选择操作（1 or 2 or 3）:");
}

void InitStack(Sqstack *s) //初始化栈
{
    s->size = 1000;
    s->s = (int *)malloc(sizeof(int) * s->size);
    s->top = 0;
}

void Push(Sqstack *s, int e) //入栈函数
{
    if (s->top < s->size)
    {
        s->s[s->top] = e;
        s->top++;
    }
}

void Pop(Sqstack *s) //出栈函数
{
    if (s->top > 0)
    {
        s->top--;
    }
}

int Top(Sqstack *s)
{
    if (s->top > 0)
    {
        return s->s[s->top - 1];
    }
    return -1;
}

void DestoryStack(Sqstack *s) //销毁栈s
{
    free(s->s);
    s->size = 0;
    s->top = 0;
}

void Manage(Sqstack *s, int index, int n) //当前处理位置index的元素
{
    int have = 0;
    int i, j;
    FILE *fp = NULL;
    if (n < index) //递归出口，当当前车号大于车厢总数时退出

    {
        fp = fopen("Carriage-Dispatch.txt", "a+");
        for (i = 0; i <= n; i++)
        {
            //输出所有的序列
            if (i == n)
            {
                //最后一个不需要打印逗号
                printf("%d", s->s[i]);
                fprintf(fp, "%d", s->s[i]);
            }
            else
            {
                printf("%d,", s->s[i]);
                fprintf(fp, "%d,", s->s[i]);
            }
        }
        printf("\n");
        fprintf(fp, "\n"); //文件内换行
        fclose(fp);
    }
    else
    {
        for (i = 0; i <= n; i++)
        {
            //要么当前编号出栈，要么下一个编号入栈
            have = 0;
            for (j = 0; j < s->top; j++)
            {
                if (s->s[j] == i + 1)
                {
                    have = 1;
                    break;
                }
            }
            if (have == 0)
            {
                Push(s, i + 1);          //当前元素进栈后下一个元素进栈
                Manage(s, index + 1, n); //编号进栈递归
                Pop(s);
            }
        }
    }
}

void Input() //输入模块
{
    Sqstack s;
    int n = 0;
    FILE *fp = fopen("Carriage-Dispatch.txt", "a+");
    printf("请输入车厢数:");
    scanf("%d", &n);
    InitStack(&s);
    if (fp != NULL)
    {
        fprintf(fp, "%d\n", n);
        fclose(fp);
    }
    Manage(&s, 0, n - 1);
    DestoryStack(&s);
}

void Show() //读取历史计算
{
    char tmp[100];
    FILE *fp = fopen("Carriage-Dispatch.txt", "a+");
    if (fp != NULL)
    {
        while (!feof(fp))
        {
            fscanf(fp, "%s", tmp); //从文中读取一行
            if (feof(fp))
            {
                break;
            }
            printf("%s\n", tmp); //打印在屏幕上
        }
        fclose(fp); //关闭文件
    }
}
