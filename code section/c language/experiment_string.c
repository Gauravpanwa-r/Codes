#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *p="good";
    char *q;
    p="morning";
    q=p;
    puts(p);
    puts(q);
    return 0;
}
