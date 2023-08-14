#include"main.h"

void withdraw(int accountNumber, float amount) 
{
    struct Account* current = firstAccount;
    while (current != NULL)
    {
        if (current->accountNumber == accountNumber)
        {
            if (current->balance >= amount)
            {
                current->balance -= amount;
            } else {
                printf("Insufficient balance.\n");
            }
            break;
        }
        current = current->next;
    }
}