#include <stdio.h>
#include <stdlib.h>

#define Stu 10
#define Cou 5

void input(double s[Stu][Cou])
{
    int i, j;
    for (i = 0; i < Stu; i++)
    {
        printf("请输入第%d位学生各科的成绩:\n", i + 1);
        printf("请输入五科的成绩:\n", j + 1);
        for (j = 0; j < Cou; j++)
        {
            scanf("%lf", &s[i][j]);
        }
    }
}

void student_Average(double s[Stu][Cou], double scoreAver[Stu])
{
    int i, j;
    double sum = 0;
    for (i = 0; i < Stu; i++)
    {
        scoreAver[i] = 0;
        sum = 0;
        for (j = 0; j < Cou; j++)
        {
            sum += s[i][j];
        }
        scoreAver[i] = sum / Cou;
    }
}

void course_Average(double s[Stu][Cou], double courseAver[Cou])
{
    int i, j;
    double sum = 0;
    for (i = 0; i < Cou; i++)
    {
        courseAver[i] = 0;
        sum = 0;
        for (j = 0; j < Stu; j++)
        {
            sum += s[j][i];
        }
        courseAver[i] = sum / Stu;
    }
}

double variance(double a[], int n)
{
    double sum = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum * sum / n - (sum / n) * (sum / n);
}

int findHighestScore(double s[Stu][Cou], int h[])
{
    int i, j, k = 0;
    double m = s[0][0];
    for (i = 0; i < Stu; i++)
    {
        for (j = 0; j < Cou; j++)
        {
            if (m < s[i][j])
            {
                m = s[i][j];
            }
        }
    }

    for (i = 0; i < Stu; i++)
    {
        for (j = 0; j < Cou; j++)
        {
            if (m == s[i][j])
            {
                h[k] = i + 1;
                k++;
            }
        }
    }

    return k;
}


void display(double totalS[Stu][Cou], double courseAver[Cou], double scoreAver[Stu], double sV, double cV, int highestS[], int h)
{
    int i, j, k;
    //打印成绩表
    printf("学生N：\t");
    for (i = 0; i < Cou; i++)
    {
        printf(" 科0%d\t", i + 1);
    }
    printf("平均分\t\n");

    for (i = 0; i < Stu; i++)
    {
        if (i + 1 < 10)
        {
            printf("学生%d：\t", i + 1);
        }
        else
        {
            printf("学生%d:\t", i + 1);
        }

        for (j = 0; j < Cou; j++)
        {
            printf("%5.2lf\t", totalS[i][j]);
        }
        printf("%5.2lf", scoreAver[i]);

        printf("\n");
    }

    printf("平均分：");
    for (i = 0; i < Cou; i++)
    {
        printf("%5.2lf\t", courseAver[i]);
    }
    printf("\n");

    //打印方差
    printf("学生平均分方差为：%.2lf\n", sV);
    printf("科目平均分方差为：%.2lf\n", cV);
    printf("\n");

    // 分数最高学生
    for (k = 0; k < h; k++)
    {
        printf("分数最高：学生%d\n", highestS[k]);
        printf("该生各科成绩为：\n");

        printf("学生N：\t");
        for (i = 0; i < Cou; i++)
        {
            printf(" 科0%d\t", i + 1);
        }
        printf("平均分\t\n");

        printf("学生%d： ", highestS[k]);
        for (j = 0; j < Cou; j++)
        {
            printf("%5.2lf\t", totalS[highestS[k] - 1][j]);
        }
        printf("%5.2lf\n", scoreAver[highestS[k] - 1]);
    }

    printf("\n");
}

int main()
{
    double totalS[Stu][Cou] = {0}; //统计各科分数
    double courseAver[Cou] = {0};   //计算科目平均分
    double scoreAver[Stu] = {0};    //计算学生平均分
    double scoreVariance = 0;   //计算学生平均分方差
    double courseVariance = 0;  //计算科目平均分方差
    int highestS[Stu] = {0};    //寻找最高分数的学生
    int hC = 0;                 //最高分数学生的个数

    input(totalS);

    student_Average(totalS, scoreAver);

    course_Average(totalS, courseAver);

    scoreVariance = variance(scoreAver, Stu);

    courseVariance = variance(courseAver, Cou);

    hC = findHighestScore(totalS, highestS);

    display(totalS, courseAver, scoreAver, scoreVariance, courseVariance, highestS, hC);

    system("pause");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// #define Stu 10
// #define Cou 5

// void input(double s[Stu][Cou])
// {
//     int i, j;
//     for (i = 0; i < Stu; i++)
//     {
//         printf("请输入第%d位学生各科的成绩:\n", i + 1);
//         printf("请输入五科的成绩:\n", j + 1);
//         for (j = 0; j < Cou; j++)
//         {
//             scanf("%lf", &s[i][j]);
//         }
//     }
// }

// void student_Average(double s[Stu][Cou], double scoreAver[Stu])
// {
//     int i, j;
//     double sum = 0;
//     for (i = 0; i < Stu; i++)
//     {
//         scoreAver[i] = 0;
//         sum = 0;
//         for (j = 0; j < Cou; j++)
//         {
//             sum += s[i][j];
//         }
//         scoreAver[i] = sum / Cou;
//     }
// }

// void course_Average(double s[Stu][Cou], double courseAver[Cou])
// {
//     int i, j;
//     double sum = 0;
//     for (i = 0; i < Cou; i++)
//     {
//         courseAver[i] = 0;
//         sum = 0;
//         for (j = 0; j < Stu; j++)
//         {
//             sum += s[j][i];
//         }
//         courseAver[i] = sum / Stu;
//     }
// }

// double variance(double a[], int n)
// {
//     double sum = 0;
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     return sum * sum / n - (sum / n) * (sum / n);
// }

// int findHighestScore(double s[Stu][Cou])
// {
//     int i, j, h = 0;
//     double m = s[0][0];
//     for (i = 0; i < Stu; i++)
//     {
//         for (j = 0; j < Cou; j++)
//         {
//             if (m < s[i][j])
//             {
//                 m = s[i][j];
//                 h = i;
//             }
//         }
//     }

//     return h + 1;
// }

// void display(double totalS[Stu][Cou], double courseAver[Cou], double scoreAver[Stu], double sV, double cV, int h)
// {
//     int i, j;
//     //打印成绩表
//     printf("学生N：\t");
//     for (i = 0; i < Cou; i++)
//     {
//         printf(" 科0%d\t", i + 1);
//     }
//     printf("平均分\t\n");

//     for (i = 0; i < Stu; i++)
//     {
//         if (i + 1 < 10)
//         {
//             printf("学生%d：\t", i + 1);
//         }
//         else
//         {
//             printf("学生%d:\t", i + 1);
//         }

//         for (j = 0; j < Cou; j++)
//         {
//             printf("%5.2lf\t", totalS[i][j]);
//         }
//         printf("%5.2lf", scoreAver[i]);

//         printf("\n");
//     }

//     printf("平均分：");
//     for (i = 0; i < Cou; i++)
//     {
//         printf("%5.2lf\t", courseAver[i]);
//     }
//     printf("\n");

//     //打印方差
//     printf("学生平均分方差为：%.2lf\n", sV);
//     printf("科目平均分方差为：%.2lf\n", cV);
//     printf("\n");

//     // 分数最高学生
//     printf("分数最高：学生%d\n", h);
//     printf("该生各科成绩为：\n");

//     printf("学生N：\t");
//     for (i = 0; i < Cou; i++)
//     {
//         printf(" 科0%d\t", i + 1);
//     }
//     printf("平均分\t\n");

//     printf("学生%d： ", h);
//     for (j = 0; j < Cou; j++)
//     {
//         printf("%5.2lf\t", totalS[h - 1][j]);
//     }
//     printf("%5.2lf\n", scoreAver[h - 1]);

//     printf("\n");
// }

// int main()
// {
//     double totalS[Stu][Cou] = {0};
//     double courseAver[Cou] = {0};
//     double scoreAver[Stu] = {0};
//     double scoreVariance = 0;
//     double courseVariance = 0;
//     int h = 0;

//     input(totalS);

//     student_Average(totalS, scoreAver);

//     course_Average(totalS, courseAver);

//     scoreVariance = variance(scoreAver, Stu);

//     courseVariance = variance(courseAver, Cou);

//     h = findHighestScore(totalS);

//     display(totalS, courseAver, scoreAver, scoreVariance, courseVariance, h);

//     system("pause");
//     return 0;
// }