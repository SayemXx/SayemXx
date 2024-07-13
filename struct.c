#include<stdio.h>

struct student {
    char name[30];
    int roll;
    float cgpa;
};
int main (){
    struct student s1;
    printf("\nEnter student name : ");
    fgets(s1.name,30,stdin);
    printf("\nEnter student roll : ");
    scanf("%d",&s1.roll);
    printf("\nEnter student CGPA : ");
    scanf("%f",&s1.cgpa);
    printf("\n\n");
    printf("Student Name is : %s",s1.name);
    printf("Studint Roll is : %d",s1.roll);
    printf("\nStudint CGPA is : %f",s1.cgpa);
}