// changes to parameters in function don't changethe values in calling function--> example given Below program
//Because a copy of argument is passed to the function 

#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value = 100.0;
    calculatePrice(value);
    return 0;

}

void calculatePrice(float value){
    value= value + (0.18 * value); 
    printf("final price is : %f", value);

    }
    
