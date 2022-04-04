// write 2 functions- one to print "Hello" & second to print "good bye"
#include<stdio.h>
void printHello();
void printgoodbye();


int main(){
    printHello();
    printgoodbye();
    printHello();
    return 0;
}

void printHello() {
    printf("Hello!\n");
}

void printgoodbye() {
    printf("Goodbye \n");
}