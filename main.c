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
        printf("********************************************\n");
        printf("O:- to open a new account and save the Initial deposit amount\n");
        printf("B:- to Balance inquiry\n");
        printf("D:- to deposit to your account\n");
        printf("W:- to withdraw money\n");
        printf("C:- close your account\n");
        printf("I:- interest has been added to all open accounts\n");
        printf("P:- to Print all open accounts and balance\n");
        printf("E:- to Close all accounts and exit the program\n");
        printf("please enter a letter: \n");
       if(scanf(" %c", &choice)==1)
       { 
        switch (choice)
        {
        case 'O':
            open();
            break;
        case 'B':
            account = 0;
            printf("Please enter your number account: \n");
            if(scanf("%d", &account)==1)
            {
            balance(account);
            break;}
            else
            {
             printf("illegal number");   
            }
            
        case 'D':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            if(scanf("%d", &account)==1)
            {
            printf("Please enter amount to deposit: \n");
            }
            else
            {
                printf("illegal account");
            }
            if(scanf("%lf",&amount)==1)
            {
                if (amount<=0)
                {
                    printf("illegal operartion\n");
                    break;
                }
                
            deposit_account(account, amount);
            break;
            }
           else
           {
               printf("illegal amounmt");
           }
           break;
            
        case 'W':
            account = 0;
            amount = 0;
            printf("Please enter your number account: \n");
            if(scanf("%d", &account)==1)
            {
            printf("Please enter amount to attract: \n");}
            else
            {
                printf("illegal account");
            }
            if(scanf("%lf", &amount)==1)
            {
            attratction(account, amount);
            break;}
            else
            {
                printf("illegal amount");
            }
            
        case 'C':
            account = 0;
            printf("Please enter your number account: \n");
            if(scanf("%d", &account)==1)
            {
            close(account);
            break;}
            else
            {
                printf("illegal acoount");
            }
            
        case 'I':
            printf("Please enter interest: \n");
            if(scanf("%lf", &prime)==1)
            {
            interest(prime);
            break;}
            else
            {
                printf("illegal number");
            }
            
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
    } while (choice != 'E');

    return 0;
}