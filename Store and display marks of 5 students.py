#include <stdio.h>

int main() {
    int marks[5];
    int i;

    // Input marks
    printf("Enter marks of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display marks
    printf("\nMarks of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
