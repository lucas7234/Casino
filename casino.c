/*Made by lucas119
casino.c
Respiratory:Casino*/
/*you can register and enjoy a lot of casino games*/

//headerfile
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//constant
#define TRUE 1
#define FALSE 0

//main program
main()
{
//Greeting
  printf("CASINO\n");
  printf("Welcome to Casino Game!\n");
  printf("Register and enjoy a lot of casino games like dice, draw poker!");
  
  //variables for register and login
  char id[9];
  char password[21];
  char enterid[9];
  char enterpw[21];
  int hasUpper, hasLower, hasDigit, hasSpecial, i;
  hasUpper=hasLower=hasDigit=hasSpecial=0;
  
  //start register
  do{
    printf("\nEnter ID(<9 letters)>");
    scanf(" %s", id);
  } while (strlen(id)>8);
  do{
   printf("\nEnter Password(>21 letters, normal and capital alphabet, number, and special characters required)>") ;
    scanf(" %s", password);
    for (i=0; i<strlen(password);i++)
    {
      if (isDigit(password[i]))
      {
        hasDigit=1;
        continue;
    }
  }
}
