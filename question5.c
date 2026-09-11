#include <stdio.h>

int main()
{
    int role, status, securityLevel;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter security level: ");
    scanf("%d", &securityLevel);

    if (status == 0)
    {
        printf("Access Denied");
    }
    else if (role == 1 && securityLevel >= 3)
    {
        printf("Admin Access Granted");
    }
    else if (role == 2 && securityLevel >= 2)
    {
        printf("Researcher Access Granted");
    }
    else if (role == 3 && securityLevel >= 1)
    {
        printf("Student Access Granted");
    }
    else
    {
        printf("Access Denied");
    }

    return 0;
}