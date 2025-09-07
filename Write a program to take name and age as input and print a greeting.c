#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name);  // reads a single word (no spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    // Printing greeting
    printf("Hello %s! You are %d years old.\n", name, age);

    return 0;
}
