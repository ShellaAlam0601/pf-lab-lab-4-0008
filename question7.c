#include <stdio.h>

int main()
{
    float dataUsed, pricePerGB;
    float basicCost, discount, finalCost;

    printf("Enter data used (GB): ");
    scanf("%f", &dataUsed);

    printf("Enter price per GB: ");
    scanf("%f", &pricePerGB);

    basicCost = dataUsed * pricePerGB;

    if (dataUsed < 50)
    {
        discount = 0;
    }
    else if (dataUsed >= 50 && dataUsed <= 99)
    {
        discount = basicCost * 0.05;
    }
    else if (dataUsed >= 100 && dataUsed <= 199)
    {
        discount = basicCost * 0.10;
    }
    else
    {
        discount = 0;
    }

    finalCost = basicCost - discount;

    printf("Basic Cost: %.2f\n", basicCost);
    printf("Discount: %.2f\n", discount);
    printf("Final Cost: %.2f", finalCost);

    return 0;
}