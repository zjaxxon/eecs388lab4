#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(int input)
{
    char str[] = "Welcome to lab 4!!!!!!! THIS is the location in memory to report";
    printf("Hello %s", "World");
    return;
}

int _main()
{
    int var = 3735928550;
    var += 9;
    foo(var);
    return 0;
}