#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    int marks;
    scanf("%d", &marks);
    printf("enter your marks\n");

    switch (age)
    {
    case 5:
        printf("the age is 5\n");
        switch (marks)
        {
        case 45:
            printf("your marks is 45");
            break;

        default:
            printf("your marks are not 45");
            break;

            break;

        case 10:
            printf("the age is 10\n");
            break;

        case 15:
            printf("the age is 15\n");
            break;
        }

        return 0;
    }
}