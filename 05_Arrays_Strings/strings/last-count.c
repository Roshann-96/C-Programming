#include <stdio.h>
#include <string.h>
int main(){

    char str[]="hello world";
    int count =0;

    for(int i= strlen(str)-1; i >=0; i--){

        if(str[i] == ' ')
         break;
        
         count++;
    }
    printf("%d", count);

    return 0;
}