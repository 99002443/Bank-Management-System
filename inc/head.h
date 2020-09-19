#include <stdio.h>
#include<stdin.h>
#ifndef _Bank_OPERATIONS_
#define _Bank_OPERATIONS_
void accept(struct customer[], int);
/**accepts customer record like name
*name,account number*/
void display(struct customer[], int);
/**Display account number,
*balance,name*/
int search(struct customer[], int, int);
/**Search the record for the given account number*/
void deposit(struct customer[], int, int, int);
/**Function to deposit money to
*the specified account*/
void withdraw(struct customer[], int, int, int);
/**Function to specify amount withdrawn
*from the specified account number*/
void veh_loan(age);
/**Function to display vehicle loan for an individual
*based on the specified age condition*/
void credit_card(age);
/**Function to provide creditcard based on the 
*age condition*/
void debit_card(age);
/**Function to provide debit card based on the
*age condition*/
#endif/*#define _Bank_OPERATIONS_*/ 