#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    switch (age)
    {
        case 0: case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8: case 9:
        case 10: case 11: case 12: case 13: case 14:
        case 15: case 16: case 17:
            printf("A child\n");
            break;
        default:
            if (age < 0)
                printf("That's not a valid age\n");
            else if (age >= 65)
                printf("A senior citizen\n");
            else
                printf("An adult\n");
            break;
    }
    return 0;
}