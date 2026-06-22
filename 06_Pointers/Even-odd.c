#include <stdio.h>  

    void check(int *n){

        if(*n % 2 == 0){
            printf("Even number");
        }
        else printf("Odd number");

    }

     int main(){

        int n;
        printf("Enter a number : ");
        scanf("%d",& n);

        check(& n);

     return  0;
     
}
