/*
ask user to enter data to purchase by choosing 1 to 4
1- 100mb data at 50ksh
2- 500mb at 200ksh
3- 1gb at 350ksh
4- 2gb at 600ksh
*/
#include <stdio.h>
int main(){
    int choice;
  printf("choose data bundles \n");
  printf("1   |100mb   |50ksh \n");
  printf("2   |500mb   |200ksh \n");
  printf("3   |1gb     |350ksh \n");
  printf("4   |2gb     |600ksh \n");

  scanf("%d'", &choice);
   switch (choice){
    case 1:
        printf("you have purchased 100mb data at 50ksh \n");
        break;
    case 2:
        printf("you have purchased 500mb data at 200ksh \n");
        break;
    case 3:
        printf("you have purchased 1gb data at 350ksh \n");
        break;
    case 4:
        printf("you have purchased 2gb data at 600ksh \n");
        break;
        default:
        printf(" invalid choice \n");
   }
   return 0;
}