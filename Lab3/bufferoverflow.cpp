#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char grade[5];
    char name[10];

    strcpy(grade, "nil");

    gets(name);

    printf("Hi %s! Your grade is %s.\n", name, grade);

    exit(0);
}
