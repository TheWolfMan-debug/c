void a(int aa)
{
    for(int i=0;i<aa;i++)
        printf(" ");
}
void b()
{
    printf("*");
}
char c(int cc)
{
    printf("%c",cc);
    return 0;
}
int main()
{
    a(6);b();a(3);b();a(5);b();a(3);b();
    printf(" ");
    a(4);b();a(8);b();a(8);b();
    printf(" ");
    a(3);b();a(19);b();
    printf(" ");
    a(3);b();a(17);b();
    printf(" ");
    a(3);b();a(4);c(73);a(1);c(76);c(111);c(118);
    c(101);a(1);c(89);c(111);c(117);a(5);b();
    printf(" ");
    a(4);b();a(17);b();
    printf(" ");
    a(6);b();a(13);b();
    printf(" ");
    a(8);b();a(9);b();
    printf(" ");
    a(10);b();a(5);b();
    printf(" ");
    a(13);b();
    printf(" ");return 0;
}
