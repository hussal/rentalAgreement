//  main.c
//  rentalAgreement
//  Created by Hussein Saleh on 11/16/21.
#include <stdio.h>
#include <string.h>

// Function prototypes
void inputData(char name[30], int *rooms, int *pets);

//Main
int main() {
    char name[30];
    float rent[3] = {800, 1050, 1300};
    int rooms, pets = 0;
    float roomPrice, petPrice, total;
    
    inputData(name, &rooms, &pets);
    roomPrice = rent[rooms - 1];
    petPrice = pets * 19.5;
    total = roomPrice + petPrice;
    
    printf("\nRental Contract for %s" , name);
    printf("\nRent for a %d bedroom is: $%.2f", rooms, roomPrice);
    printf("\nAdditional cost for pets: $%.2f", petPrice);
    printf("\nYour total rent will be: $%.2f\n\n", total);
    
    return 0;
}

// Functions

void inputData(char name[30], int *rooms, int *pets){
    printf("\nEnter your name: ");
    fgets(name, 30, stdin);
    printf("How many bedrooms would you like 1-3? ");
    scanf("%d", &*rooms);
    while (*rooms > 3 || *rooms < 1){
        printf("Invalid entry. How many bedrooms would you like 1-3? ");
        scanf("%d", &*rooms);
    }
    printf("How many pets do you have? ");
    scanf("%d", &*pets);
}
