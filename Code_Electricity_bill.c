#include <stdio.h>

// Function to calculate electricity bill
float calculateBill(int units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 1.5;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.5) + ((units - 100) * 2.5);
    }
    else
    {
        bill = (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4);
    }

    return bill;
}

int main()
{
    int customerID, units;
    char customerName[50];
    float bill;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);

    // Input electricity units
    printf("Enter Electricity Units Consumed: ");
    scanf("%d", &units);

    // Calculate bill
    bill = calculateBill(units);

    // Display bill
    printf("\n=====================================\n");
    printf("        ELECTRICITY BILL\n");
    printf("=====================================\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill    : Rs. %.2f\n", bill);
    printf("=====================================\n");

    return 0;
}
