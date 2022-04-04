//aak  function bna  rha hu jisma  two  nummber  ki  value ko  lega means argument pass krega 
 //jisma  dono value ka sum  ko return krega
 //return keyword ka use kerta hai hum koi vi value ko wapas/phir  sa return kerna ka lia 

#include<stdio.h>

sum(int a,int b);
int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter 2nd number : " );
    scanf("%d",&b);

   int s= sum(a,b);
   printf("sum is %d: ",s);
   return 0;

}

int sum(int a,int b){
    return a+b; // ya return keyword ka use kerta hai value ko phir sa return kerna ka lia or ya return hoker calling
    // fuction ka pass jati hai.
}
