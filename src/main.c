
#include <stdio.h>
#include "file1.c"
void file1_myfun1(void);
void change_clock(int system_clock);
int mainPrivateData; // global visibility variable to all project files.

int main()
{
    mainPrivateData = 100;
    printf("mainPrivateData = %d\n", mainPrivateData);
    file1_myfun1();
    printf("mainPrivateData = %d\n", mainPrivateData);
    return 0;
}

void change_clock(int system_clock)
{
    printf("change_clock = %d\n", system_clock);
}