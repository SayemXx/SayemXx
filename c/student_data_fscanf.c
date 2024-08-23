#include <stdio.h>
typedef struct students_data{
    char n[30];
    int r;
    int a;
    float c;
}sd;
int main(){
    FILE *std;
    std=fopen("student.txt","r");
    if(std==NULL){
        printf("\n\nData is not available.");
    }
    int ch,cl;
    printf("Enter a range which number of Students data you want.\n\nEnter the lowre renge : ");
    scanf("%d",&cl);
    printf("\nEnter the higher range : ");
    scanf("%d",&ch);
    if (cl>ch){
        int a;
        a=cl;
        cl=ch;
        ch=a;
    }
    sd cs[ch];
 for(int i=0;i<ch;i++){
    fscanf(std,"%s",&cs[i].n);
    fscanf(std,"%d",&cs[i].r);
    fscanf(std,"%d",&cs[i].a);
    fscanf(std,"%f",&cs[i].c);
     fscanf(std,"%c");
 }
 for(int i=cl;i<=ch;i++){
    printf("\n%s",cs[i].n);
     printf("\n%d",cs[i].r);
      printf("\n%d",cs[i].a);
       printf("\n%f\n\n",cs[i].c);
 }

}