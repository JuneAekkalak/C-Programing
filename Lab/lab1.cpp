#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int main()
{
    char name[30];
    int age;

    printf("Hello, what is your name ? ");
    scanf("%s", &name);
    printf("How old are you ");
    scanf("%d", &age);
    printf("Nice to meet you %s \n", name);
    printf("you are %d year old\n", age);
    printf("bye %s \n", name);
    printf("Press any key to continue..");
    getch();
}
