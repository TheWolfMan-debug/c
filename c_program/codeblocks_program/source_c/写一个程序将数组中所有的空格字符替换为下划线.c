/*给定如下的数组：
  char chars[] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd' } ;
写一个程序将数组中所有的空格字符替换为下划线字符'_'。
使用指针而不是下标访问数组元素。

**输出格式要求："替换后数组为："  "%c "*/

#include <stdio.h>

int main()
{
    char chars[9] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd' , '\0' } ;
    char *p=chars;
    char *b=chars;
    while(*p)
    {
        if(*p==' ')
        {
            *p='_';
        }
        p++;
    }
    printf("替换后数组为：");
    while(*b)
    {
        printf("%c ",*b);
        b++;
    }
    return 0;
}
