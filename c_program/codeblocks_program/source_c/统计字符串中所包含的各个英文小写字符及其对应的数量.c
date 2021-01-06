/*#include <stdio.h>
#include <string.h>

#define ARR_SIZE 80

int main()
{
    char str[ARR_SIZE],count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0,count11=0,count12=0,count13=0,count14=0,count15=0,count16=0,count17=0,count18=0,count19=0,count20=0,count21=0,count22=0,count23=0,count24=0,count25=0,count26=0;
    int  len, i;
    int  letter=0,digit=0,space=0,other=0;

    printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:");
    gets(str);

    len = strlen(str);

    for (i=0;i<len;i++)
    {
        if(str[i]=='a')
        {
            count1++;
        }
        else if(str[i]=='b')
        {
            count2++;
        }
        else if(str[i]=='c')
        {
            count3++;
        }
        else if(str[i]=='d')
        {
            count4++;
        }
        else if(str[i]=='e')
        {
            count5++;
        }
        else if(str[i]=='f')
        {
            count6++;
        }
        else if(str[i]=='g')
        {
            count7++;
        }
        else if(str[i]=='h')
        {
            count8++;
        }
        else if(str[i]=='i')
        {
            count9++;
        }
        else if(str[i]=='j')
        {
            count10++;
        }
        else if(str[i]=='k')
        {
            count11++;
        }
        else if(str[i]=='l')
        {
            count12++;
        }
        else if(str[i]=='m')
        {
            count13++;
        }
        else if(str[i]=='n')
        {
            count14++;
        }
        else if(str[i]=='o')
        {
            count15++;
        }
        else if(str[i]=='p')
        {
            count16++;
        }
        else if(str[i]=='q')
        {
            count17++;
        }
        else if(str[i]=='r')
        {
            count18++;
        }
        else if(str[i]=='s')
        {
            count19++;
        }
        else if(str[i]=='t')
        {
            count20++;
        }
        else if(str[i]=='u')
        {
            count21++;
        }
        else if(str[i]=='v')
        {
            count22++;
        }
        else if(str[i]=='w')
        {
            count23++;
        }
        else if(str[i]=='x')
        {
            count24++;
        }
        else if(str[i]=='y')
        {
            count25++;
        }
        else if(str[i]=='z')
        {
            count26++;
        }
    }
    if(count1!=0)
    {
        printf("a=%d\n",count1);
    }
    if(count2!=0)
    {
        printf("b=%d\n",count2);
    }
    if(count3!=0)
    {
        printf("c=%d\n",count3);
    }
    if(count4!=0)
    {
        printf("d=%d\n",count4);
    }
    if(count5!=0)
    {
        printf("e=%d\n",count5);
    }
    if(count6!=0)
    {
        printf("f=%d\n",count6);
    }
    if(count7!=0)
    {
        printf("g=%d\n",count7);
    }
    if(count8!=0)
    {
        printf("h=%d\n",count8);
    }
    if(count9!=0)
    {
        printf("i=%d\n",count9);
    }
    if(count10!=0)
    {
        printf("j=%d\n",count10);
    }
    if(count11!=0)
    {
        printf("k=%d\n",count11);
    }
    if(count12!=0)
    {
        printf("l=%d\n",count12);
    }
    if(count13!=0)
    {
        printf("m=%d\n",count13);
    }
    if(count14!=0)
    {
        printf("n=%d\n",count14);
    }
     if(count15!=0)
    {
        printf("o=%d\n",count15);
    }
    if(count16!=0)
    {
        printf("p=%d\n",count16);
    }
    if(count17!=0)
    {
        printf("q=%d\n",count17);
    }
    if(count18!=0)
    {
        printf("r=%d\n",count18);
    }
    if(count19!=0)
    {
        printf("s=%d\n",count19);
    }
    if(count20!=0)
    {
        printf("t=%d\n",count20);
    }
    if(count21!=0)
    {
        printf("u=%d\n",count21);
    }
    if(count22!=0)
    {
        printf("v=%d\n",count22);
    }
    if(count23!=0)
    {
        printf("w=%d\n",count23);
    }
    if(count24!=0)
    {
        printf("x=%d\n",count24);
    }
    if(count25!=0)
    {
        printf("y=%d\n",count25);
    }
    if(count26!=0)
    {
        printf("z=%d\n",count26);
    }
    return 0;
}*/
#include <stdio.h>
#define BUFFER_SIZE 80
#define COUNT_SIZE 26
main( )
{
    char str[BUFFER_SIZE+1];  //2
    int count[COUNT_SIZE]={0}; //2
    int i = 0;
    gets(str); //2
    for(i=0; str[i]!='\0'; i++)  //1
    {
        if((str[i]>='a') && (str[i]<='z')) //2
            count[str[i]-'a']++;  //4
    }

    for(i=0; i<COUNT_SIZE; i++) //1
    {
        if(count[i]>0) //1
        {
             printf("%c=%d\n", i+'a', count[i]); //2
        }
    }
}
