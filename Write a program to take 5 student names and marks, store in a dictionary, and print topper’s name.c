#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    int i, topperIndex = 0;

    printf("Enter names and marks of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", students[i].name);   // single-word name
        printf("Student %d marks: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s with %d marks\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
