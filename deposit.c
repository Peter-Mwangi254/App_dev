#include"main.h"

void deposit(int accountNumber, float amount) 
{
    struct Account* current = firstAccount;
    while (current != NULL) 
    {
        if (current->accountNumber == accountNumber) 
        {
            current->balance += amount;
            break;
        }
        current = current->next;
    }
}