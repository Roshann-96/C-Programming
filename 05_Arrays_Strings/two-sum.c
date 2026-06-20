#include<stdio.h>
    int main(){

        int arr[] = {2,7,11,15};
        int target = 9;
        int inx1 = 0;
        int inx2 = 0;

        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if(arr[i] + arr[j] == target){
                    inx1 = i + 1;
                    inx2 = j + 1;
                }
            }
        }
        printf("index No: %d  index No: %d ",inx1 ,inx2);

        return 0;
    }
