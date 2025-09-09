//Write a program that prompts the user to enter their name and age and print the same.
#include <stdio.h>
int main(){
    char name[50];  //to store the game
    int age;        //to store the age 
    //Prompt user for name
    printf("Enter your name:");
    scanf("%s", name);  //Read a single word (use fgets for full name with spaces)
    //Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);
    //Dispaly entered details
    printf("\nHello %s! You are %d years old.\n" , name, age);
    return 0;
}
