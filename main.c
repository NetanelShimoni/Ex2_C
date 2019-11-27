#include <stdio.h>
#include "myBank.h"
int main()
{
    char choice;
    printf("*******WELCOME TO OUR BANK!*******\n");
    do
    {
        int account = 0, count = 0;
        double amount = 0;
        printf("*******************************************\n");
        printf("O:- to open a new account and save the Initial deposit amount\n");
        printf("B:- to Balance inquiry\n");
        printf("D:- to deposit to your account\n");
        printf("W:- to withdraw money\n");
        printf("C:- close your account\n");
        printf("I:- interest has been added to all open accounts\n");
        printf("P:- to Print all open accounts and balance\n");
        printf("E:- to Close all accounts and exit the program\n");
        printf("please enter a letter: \n");
        if (scanf(" %c", &choice) != 1)
        {
            printf("invalid input");
            break;
        }

        switch (choice)
        {
        case 'O':
            open();
            break;
        case 'B':
            account = 0;
            printf("Please enter your number account: \n");
            if (scanf("%d", &account))!=1)
                {
                    printf("invalid input");
                    break;
                }
            balance(account);
            break;
        case 'D':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            if (scanf("%d", &account) != 1)
            {
                printf("invalid input");
                break;
            }
            printf("Please enter amount to deposit: \n");
            if (scanf("%lf", &amount) != 1)
            {
                printf("invalid input");
                break;
            }
            deposit_account(account, amount);
            break;
        case 'W':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            if (scanf("%d", &account) != 1)
            {
                printf("invalid input");
                break;
            }
            printf("Please enter amount to attract: \n");
            if (scanf("%lf", &amount) != 1)
            {
                printf("invalid input");
                break;
            }
            attratction(account, amount);
            break;
        case 'C':
            account = 0;
            printf("Please enter your number account: \n");
            if (scanf("%d", &account) != 1)
            {
                printf("invalid input");
                break;
            }
            close(account);
            break;
        case 'I':
            interest();
            break;
        case 'P':
            print_all_open_acuont();
            break;
        case 'E':
            close_all_counts();
            printf("the transaction completed succssefully-all the accounts closed\n");
            break;
        default:
            printf("ERR choice, please enter legal letter:\n");
            break;
        }
    }
}
while (choice != 'E')
    ;

return 0;
}
