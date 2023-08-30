#include"main.h"


struct Account * firstAccount = NULL;

int main(void)
{
    int ID_num, accountNum, choice;
    char name[100];
    float balance;
    static unsigned int lastAssignedAccount = 100000;

    while(1)
    {
        printf("\t\t\t\t\t----------Online Banking System--------\n");
        printf("\t\t\t\t\t1. Create Account\n");
        printf("\t\t\t\t\t2. Check Balance\n");
        printf("\t\t\t\t\t3. Exit\n");
        printf("\t\t\t\t\t\nEnter your choice: ");
        scanf("%d", &choice);
    

    switch (choice)
    {
    case 1:
        printf("Enter ID Number: ");
        scanf("%d", &ID_num);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter initial Balance: ");
        scanf("%f", &balance);
        
        Create_Account(ID_num, name, balance);
        printf("Account number:%d created with Id %d, %s, %.2f\n", firstAccount->accountNum, firstAccount->ID_num, firstAccount->name, firstAccount->balance);
        break;

    case 2:
        printf("Enter Account Number: ");
       if (scanf("%d", &accountNum) != 1)
       {
        printf("Invalid input for Account Number.\n");
        break;
       }
       float accountBalance = check_Balance(accountNum);
        if (accountBalance == -1)
        {
            printf("Account not found.\n");
        }
        else
        {
            printf("Account Balance: %.2f\n", accountBalance);
        }
        break;
        
    case 3:
        printf("Exiting....\n");
        return (0);
    default:
    
        printf("Invalid choice\n");
        break;
    }

    
    free(firstAccount);

    return (0);
}
}



