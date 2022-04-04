//  write a  function that prints Namaste if user is indian &  Banjour  if   the  user is  french.

#include<stdio.h>

void Namaste();
void Bonjour();

int  main(){
    char ch;
    
   printf("Enter F for French and I for Indian :");
   scanf("%c",&ch);
   if(ch=='I' ){
       Namaste();
   }
   else{
        Bonjour();
       }

   return 0;
}

void  Namaste(){
    printf("Namaste  \n");
}

void  Bonjour(){
    printf("Bonjour   \n");
} 