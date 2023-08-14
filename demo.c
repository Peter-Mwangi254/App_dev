// Function to create a new account
void createAccount(int accountNumber, char* name, float initialBalance) {
    struct Account* newAccount = (struct Account*)malloc(sizeof(struct Account));
    newAccount->accountNumber = accountNumber;
    strcpy(newAccount->name, name);
    newAccount->balance = initialBalance;
    newAccount->next = firstAccount;
    firstAccount = newAccount;
}

// Function to check account balance
float checkBalance(int accountNumber) {
    struct Account* current = firstAccount;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            return current->balance;
        }
        current = current->next;
    }
    return -1; // Account not found
}

// Function to deposit money into an account
void deposit(int accountNumber, float amount) {
    struct Account* current = firstAccount;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            current->balance += amount;
            break;
        }
        current = current->next;
    }
}

// Function to withdraw money from an account
void withdraw(int accountNumber, float amount) {
    struct Account* current = firstAccount;
    while (current != NULL) {
        if (current->accountNumber == accountNumber) {
            if (current->balance >= amount) {
                current->balance -= amount;
            } else {
                printf("Insufficient balance.\n");
            }
            break;
        }
        current = current->next;
    }
}
