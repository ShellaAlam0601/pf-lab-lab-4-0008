#include <stdio.h>

int main()
{
    int score;

    printf("Enter confidence score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid Score");
    }
    else if (score <= 49)
    {
        printf("Low Confidence");
    }
    else if (score <= 79)
    {
        printf("Moderate Confidence");
    }
    else
    {
        printf("High Confidence");
    }

    return 0;
}