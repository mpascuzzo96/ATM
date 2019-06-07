
#include <stdio.h>
#include <math.h>

//Starting the main function
int main()  {

//initializing the variables
    float initial, donation, investment, current_balance;
    int choice, num_donations = 0, num_investments = 0;

//Asking the user the starting balance
    printf("Welcome!\n");
    printf("What is the initial balance of the fund?\n");
    scanf("%f",&initial);
//Allowing the initial to be calculated as current so donations and investments can be added in
    current_balance = initial;


//While loop so after every choice these print statements show up again
while (choice != 4){
    printf("What would you like to do?\n");
    printf("\t 1 - Make a donation\n");
    printf("\t 2 - Make an investment\n");
    printf("\t 3 - Print balance of fund\n");
    printf("\t 4 - Quit\n");
    scanf("%d", &choice);



//Switch statement allows for the specific case to be used.
switch(choice) {
//Each specific case for what the user chooses including the equations


        case 1 : printf("How much would you like to donate?\n");
            scanf("%f", &donation);
            current_balance += donation;
            num_donations++;
        break;



        case 2 : printf("How much would you like to invest?\n");
            scanf("%f", &investment);
//If else statement to make sure the invest does not bring the total below the initial
            if (current_balance - investment < initial){
            printf("You cannot make an investment of that amount.\n");
        }
            else {
            current_balance -= investment;
            num_investments++;
        }
        break;



        case 3 :
            printf("The current balance is $%.2f.\n", current_balance);
            printf("There have been %d donations and %d investments.\n", num_donations, num_investments);
        break;



//printing final balance and final actions to the user
        case 4 :
            printf("The final balance is $%.2f\n", current_balance);
            printf("There were %d donations and %d investments.",  num_donations, num_investments);
            break;

     }
}
return 0;
}
