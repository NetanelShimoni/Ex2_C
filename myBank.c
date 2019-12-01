#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define open_account 1
#define close_account 0
double matrix[2][50] = {{0}};
int size = 0;
void open()
{
    double sum = 0;
    printf("How much money you want to deposit\n");
    if(scanf("%lf", &sum)==1){
    if (sum<0)
    {
        printf("You cannot enter a negative amount\n");
        return;
    }
    
    if (size < 50)
    {
        for (int columns = 0; columns < 50; columns++)
        {
            if (matrix[1][columns] == close_account)
            {
                matrix[0][columns] = sum;
                matrix[1][columns] = open_account;
                printf("your new account is %d\n", (columns + 901));
                size++;
                break;
            }
        }
    }
    else
    {
        printf("the bank full\n");
    }
 }
 else
 {
     printf("The amount illegal\n");
 }
 

    return;
}

void balance(int num_account)
{
    if (num_account < 901 || num_account > 950)
    {
        printf("**illegal account**\n");
        return;
    }
    if (matrix[1][num_account - 901] == open_account)
    {
        printf("Your balance is: %0.2f\n", matrix[0][num_account - 901]);
    }
    else
    {
        printf("this account is close\n");
    }
}
void deposit_account(int num_account, double amount)
{
   if (amount<=0)
   {
       printf("amount cant be negative\n");
       return;
   }
   
    if (num_account < 901 || num_account > 950)
    {
        printf("**illegal account**\n");
        return;
    }
    if (matrix[1][num_account - 901] != open_account)
    {
        printf("the account is close, the operation cannot be performed\n");
    }
    else
    {
        matrix[0][num_account - 901] += amount;
        printf("your balance is: %0.2f\n", matrix[0][num_account - 901]);
    }
    return;
}

void attratction(int num_account, double amount)
{
    if (num_account > 950 || num_account < 901)
    {
        printf("**illegal account**\n ");
        return;
    }
    if (matrix[1][num_account - 901] != open_account)
    {
        printf("the account is close, the operation cannot be performed\n");
        return;
    }
    if (matrix[0][num_account - 901] - amount < 0)
    {
        printf("the amount requested is too large, the operation cannot be performed\n");
        return;
    }
    if ((matrix[1][num_account - 901] == open_account) && (matrix[0][num_account - 901] - amount >= 0))
    {
        matrix[0][num_account - 901] -= amount;
        printf("your balance is:%0.2f\n", matrix[0][num_account - 901]);
    }
    return;
}

void close(int num_account)
{
    if (matrix[1][num_account - 901] == close_account)
    {
        printf("the account is already close! \n");
    }
    else
    {
        matrix[1][num_account - 901] = close_account;
        matrix[0][num_account - 901] = 0;
        size--;
        printf("your account closed\n");
    }
    return;
}

void interest(double prime)
{
    for (int columns = 0; columns < 50; columns++)
    {
        if (matrix[1][columns] == open_account)
        {
            matrix[0][columns] *= (1+prime/100);
        }
    }
    printf("the interest has been added to all open accounts\n");
    return;
}

void print_all_open_acuont()
{
    if (size == 0)
    {
        printf("there is no open accounts\n");
    }

    for (int columns = 0; columns < 50; columns++)
    {
        if (matrix[1][columns] == open_account)
            printf("the number account is: %d, and the balance is: %0.2f\n", (columns + 901), matrix[0][columns]);
    }
    return;
}

void close_all_counts()
{
    for (int columns = 0; columns < 50; columns++)
    {
        matrix[1][columns] = 0;
    }
    return;
}