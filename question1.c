#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("All three numbers are equal and greatest.");
    }
    else if (a >= b && a >= c)
    {
        if (a == b)
            printf("%d and %d are equal and greatest.", a, b);
        else if (a == c)
            printf("%d and %d are equal and greatest.", a, c);
        else
            printf("%d is the greatest number.", a);
    }
    else if (b >= a && b >= c)
    {
        if (b == c)
            printf("%d and %d are equal and greatest.", b, c);
        else
            printf("%d is the greatest number.", b);
    }
    else
    {
        printf("%d is the greatest number.", c);
    }

    return 0;
}