#include "main.h"

void Create_Account(int ID_num, char* name, float initialBalance)
{
int lastAssignedAccountNumber;
int newAccountNum = lastAssignedAccountNumber++;

struct Account *newAccount = malloc(sizeof(struct Account));
newAccount->accountNum = newAccountNum;
newAccount->ID_num = ID_num;
newAccount->name = strdup(name);
newAccount->balance = initialBalance;
newAccount->next = firstAccount;
firstAccount = newAccount;
}