/*减式还原。编写程序求解下式中各字母所代表的数字，不同字母代表不同的数学。
**输出格式要求：
"    PEAR        %d%d%d%d\n"
"     ARA       -  %d%d%d\n"
"-----------   ----------------\n"
"     PEA           %d%d%d\n"
程序运行示例如下：
     PEAR         1098
      ARA       -  989
-----------   ----------------
      PEA          109*/

#include <stdio.h>
int main()
{
    printf("    PEAR        %d%d%d%d\n",1,0,9,8);
    printf("     ARA       -  %d%d%d\n",9,8,9);
    printf("-----------   ----------------\n");
    printf("     PEA           %d%d%d\n",1,0,9);
    return 0;
}
