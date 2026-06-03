#include <stdio.h>
void add(int *a,int *b){

     int sum= *a + *b;
     printf("%d or %d sum is :   %d ",*a ,*b ,sum);
   
}

int main(){

    int x;
    printf("Enter 1st num:  ");
    scanf("%d", &x);

    int y;
    printf("Enter 2nd num: ");
    scanf("%d", &y);

    add( &x , &y);

     return 0;
}
--
