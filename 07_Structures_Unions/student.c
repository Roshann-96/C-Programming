#include <stdio.h>
#include <string.h>
    int main(){

        struct student{
            char collage[25];
            char branch[50];
            char name[14];
            float marks;
            int roll;
        };

        struct student s;
        strcpy(s.collage , "Godavari collage of engg");
        strcpy(s.branch,"Electronics And Telecommunication");
        strcpy(s.name , "Roshan Dhangar");
        s.marks = 85.5;
        s.roll = 11;

        printf("Student Name: %s",s.name);
        printf("\nCollage Name: %s",s.collage);
        printf("\nStudent Branch: %s",s.branch);
        printf("\nStudent Marks: %f",s.marks);
        printf("\nStudent Roll No: %d",s.roll);

        return 0;
    }