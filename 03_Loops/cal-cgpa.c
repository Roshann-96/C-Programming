#include <stdio.h>
    int main(){

        int n;
        float sum = 0;
        float cgpa;
        float sgpa;

        printf("Enter number of semisters : ");
        scanf("%d",& n);

        for(int i=1; i<=n; i++){

            printf("Enter a sgpa %d : ", i);
            scanf("%f",& sgpa);

            sum = sum + sgpa;
        }

        cgpa = sum / n;
        printf(" Your CGPA iS : %.2f ",cgpa);

        return 0;

    }