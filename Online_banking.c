#include"main.h"

struct Account 
{
    int accountNum; 
    int ID_num;
    char name[50];
    float balance;
    struct Account *next;
};
struct Account* firstAccount = NULL;

void Create_Account(int accountNum, int ID_num, char* name, float initialBalance);

int main(void)
{
    int accountNum = 123456789;
    int ID_num = 35903317;
    char name[50] = "Peter";
    float balance = 1000;

    Create_Account(accountNum, ID_num, name, balance);

    printf("Account number:%d created with Id %d, %s, %.2f\n", firstAccount->accountNum, firstAccount->ID_num, firstAccount->name, firstAccount->balance);
    free(firstAccount);

    return (0);
}



