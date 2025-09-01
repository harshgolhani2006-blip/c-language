#include<stdio.h>
int main(){
    int choice;
    float amount;
    float balance=500000;
    printf("\n=====MINI ATM=====\n");
    printf("1.Check Balance\n,2.Deposite Money\n,3.Withdraw Money\n,4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Your current balance is :%f\n",balance);
        break;
        case 2:
        printf("Enter amount to deposite: ");
        scanf("%f",&amount);
        if(amount > 0){
            balance +=amount;
            printf("Deposite Successful! New Balance: %f\n",balance);
        }else{
            printf("Invalid amount! Deposite failed.\n");
        }
        break;
        case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f",&amount);
        if(amount > 0 && amount <=balance){
            balance -= amount;
            printf("Withdrawal Successful! Remaining balance: %f\n",balance);
        }else{
            printf("Invalid amount! Withdrawal failed.\n");
        }
        break;
        case 4:
        printf("Thank You for using this MINI ATM. Good Bye bye !\n");
        return 1;
        default:
        printf("Invalid choice! Try again.\n");
    }
    }


