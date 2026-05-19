#include <stdio.h>
void fun(int arr[]){
    arr[2] = 10;

    return;

}
int main(){
   int arr[5]={1,2,3,4,5};
   printf("index num %d\n",arr[2]); 
   fun(arr);
   printf("passing value %d",arr[2]);

   return 0;
}