#include<stdio.h>
    int main(){
        FILE *ptr = fopen("write.txt","w");
        char str[]=" Hi.. \n I am Roshan Dhangar \n I am B.Tech Student From Electronics & Telecommunication (E&TC) engineering ";
        fputs(str,ptr);
        fclose(ptr);

    }
