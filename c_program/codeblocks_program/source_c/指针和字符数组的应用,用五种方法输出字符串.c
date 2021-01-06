#include <stdio.h>

void main()
{
    int i = 0;
    char str[6] = {'C', 'h', 'i', 'n', 'a', '\0'}, str1[6] , *ptr=str, *ptr1, *ptr2 , str2[1][6]={"China"};
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    scanf("%s", ptr);
    puts(ptr);
    ptr1 = str;
    puts(ptr1);
    ptr2 = "China";
    puts(ptr2);

    printf("%s", str2);
}
