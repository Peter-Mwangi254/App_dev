#include "main.h"
float check_Balance(int accountNum) 
{
    struct Account* current = firstAccount;
    while (current != NULL) 
    {
        if (current->accountNum == accountNum) 
        {
            return current->balance;
        }
        current = current->next;
    }
    return -1; // Account not found
}