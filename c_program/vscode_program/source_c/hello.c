#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <stdarg.h>
#include <assert.h>
#include <locale.h>

int main()
{
        int a,b,c;
    for(a=1;a<=150;a++)
    {
        for(b=2;b<=(150-a)/2;b++)
        {
            for(c=5;c<=(150-a-2*b)/5;c++)
            {
                if(a+b+c==100&&a+b*2+c*5==150)
                {
                    printf("a = %d, b = %d, c = %d\n",a,b,c);
                }
            }
        }
    }

    
    // int a,b,c;
    // for(a=1;a<=150;a++)
    // {
    //     for(b=2;b<=(150-a)/2&&(150-a)%2==0;b++)
    //     {
    //         for(c=5;c<=(150-a-2*b)/5&&(150-a-2*b)%5==0;c++)
    //         {
    //             if(a+b+c==100)
    //             {
    //                 printf("a = %d, b = %d, c = %d\n",a,b,c);
    //             }
    //         }
    //     }
    // }

    system("pause");
    return 0;
}



// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main()
// {
//     time_t curtime;

    

//     printf("当前时间 = %d\n", time(&curtime));
//     printf("当前时间 = %s", ctime(&curtime));
//     system("pause");
//     return (0);
// }

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{

    int start = clock();

    int len1, len2;
    char buffer[] = "25,142,330,Smith,J,239-4123";

    len1 = strspn(buffer, "0123456789");
    len2 = strspn(buffer, ",0123456789");
    printf("%d %d", len1, len2);

    // char str1[] = "ina!china!";
    // char str2[] = "china!china!china!china!china!china!";

    // if(strstr(str2,str1))
    // {
    //     puts(str1);
    //     puts(strstr(str2,str1));
    //     printf("%c",*strstr(str2,str1));
    // }

    // printf("%d\n", strlen(str1) - strlen(str2));
    // printf("%d\n", strlen(str2) - strlen(str1));

    // if (strlen(str1) >= strlen(str2))
    // {
    //     printf("str1长度大于str2\n");
    // }
    // if (strlen(str1) - strlen(str2) >= 0)
    // {
    //     printf("str1长度大于str2\n");
    // }

    puts(ctime(NULL));

    printf("\n");

    int end = clock();
    printf("执行时间为%f\n", difftime(end, start));
    system("pause");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int a,b;
//     printf("Input a and b:\n");
//     scanf("%d%d",&a,&b);
//     printf("a+b=%d\n",a+b);
//     system("pause");
//     return 0;
// }
 */
