#include "main.h"

void Create_Account(int accountNum, int ID_num, char* name, float initialBalance)
{
struct Account* firstAccount = NULL;
struct Account* newAccount = (struct Account*)malloc(sizeof(struct Account));
newAccount->accountNum = accountNum;
newAccount->ID_num = ID_num;
strcpy(newAccount->name, name);
newAccount->balance = initialBalance;
newAccount->next = firstAccount;
firstAccount = newAccount;
}