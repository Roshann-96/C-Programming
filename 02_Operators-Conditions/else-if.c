#include <stdio.h>
    int main(){

        int a , b, c ;
        printf(" enter 1st no : ");
        scanf("%d",& a);
        printf(" enter 2nd no : ");
        scanf("%d",& b);
        printf("enter 3rd no : ");
        scanf("%d",& c);

        if(a>b){
            if(a>c){
            printf("%d is gretest",a);
            } 
            else("%dis gretest ",c);

        }
        else{
            if(b>c){
            printf("%d is gretest ",b);
            }
            else("%d is gretest",c);
        }

        return 0;
    }