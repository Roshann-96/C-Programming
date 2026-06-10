#include <stdio.h>
#include <string.h>
    int main(){

        char str[40];
        puts("entre a string");
        scanf("%s", str);

        int size = 0;
        int k = 0;
        
        //size check
        while(str[k]!= '\0'){
            size++; //7
            k++; //7

        }
        // reverse
        for( int i=0,j=size-1;i<=j;i++,j--){
            int temp = str[i];
            str[i] = str[j];
            str[j] = temp;

        }
        puts("The reverse string is ");
        puts(str);

        return 0;
    }

