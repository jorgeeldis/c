#include <stdio.h>

int main()
{
    char first_name[25];
    int age;
    char full_name[50];
    printf("Enter your name and age: \n");
    scanf("%s %d", first_name, &age);
    printf("Enter your full name: \n");
    gets(full_name);
    printf("Enter your full name: \n");
    fgets(full_name, 50, stdin);
}