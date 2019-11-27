#include <stdio.h>
#include "myBank.h"
int main()
{
    char choice;
    printf("*******WELCOME TO OUR BANK!*******\n");
    do
    {
        int account = 0;
        double amount = 0;
        double prime = 0;
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
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'O':
            open();
            break;
        case 'B':
            account = 0;
            printf("Please enter your number account: \n");
            scanf("%d", &account);
            balance(account);
            break;
        case 'D':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            scanf("%d", &account);
            printf("Please enter amount to deposit: \n");
            scanf("%lf", &amount);
            deposit_account(account, amount);
            break;
        case 'W':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            scanf("%d", &account);
            printf("Please enter amount to attract: \n");
            scanf("%lf", &amount);
            attratction(account, amount);
            break;
        case 'C':
            account = 0;
            printf("Please enter your number account: \n");
            scanf("%d", &account);
            close(account);
            break;
        case 'I':
            printf("Please enter interest: \n");
            scanf("%lf", &prime);
            interest(prime);
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

    } while (choice != 'E');

    return 0;
}