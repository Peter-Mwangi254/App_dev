#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**Define the struct Account here*/
struct Account
{
    int accountNum;
    int ID_num;
    char* name;
    float balance;
    struct Account* next;
};
/* Declaring global variable*/
extern struct Account* firstAccount;
 /**Function prototypes*/
void Create_Account(int ID_num, char* name, float initialBalance);
float check_Balance(int accountNum);
void deposit(int accountNumber, float amount);
void withdraw(int accountNumber, float amount);



#endif