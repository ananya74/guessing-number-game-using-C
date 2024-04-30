#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int n;
  srand(time(0));
  n=rand()%100+1;
  printf("%d\n",n);
  printf("---------------------------HELLLLOOOOO!!!--------------------------------\n");
  printf("---------------------------WELCOME TO THE GUESSING GAME -----------------\n");
  printf("--------------------------------------------------------------------------\n");
  printf("START BY ENTERING A NUMBER AND LET US DECIDE WHWTHER THE NYMBER YOU SELECTED IS GUESSED RIGHT OR WRONG\n");
   printf("--------------------------------------------------------------------------\n");
  int m;
  printf("ENTER YOUR GUESSED NUMBER  : \n");
  scanf("%d",&m);
   printf("--------------------------------------------------------------------------\n");
  while(n!=m){
    if(n>m){
      printf("OOOPSSIEEEEE YOU ARE REACHING DOWN THE SHORE :| \n");
       printf("--------------------------------------------------------------------------\n");
      printf("GUESS A LARGER NUMBERR PLEAASEEE  : \n ");
      scanf("%d",&m);
      printf("--------------------------------------------------------------------------\n");
    }
    else if(n<m){
      printf("WELL WHY GOING UP THe HILL DUDE :( \n");
     printf("--------------------------------------------------------------------------\n");
      printf("TRY A LESS NUMBER PLEASEEEE  :  \n");
      scanf("%d",&m);
     printf("--------------------------------------------------------------------------\n");
    }
  }
  printf("--------------------------------------------------------------------------\n");
  printf("------------------------------YOU WONN :)------------------------------------\n");
  printf("YOU GUESSED IT RIGHT!!:)\n");
   printf("--------------------------------------------------------------------------\n");
}