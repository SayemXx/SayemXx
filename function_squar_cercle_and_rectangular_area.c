#include<stdio.h>
#include<math.h>
float sqa(float a){
    printf("Area of a squar is : %f",pow(a,2));
}
float cla(float a){
    printf("Area of a carcle is : %f",3.1416*pow(a,2));
}
float rca(float a,float b){
    printf("Area of a Rectangular is : %f",a*b);
}
int main(){

    float a,b;
    printf("\n\nFor calculet the Area of a squar Enter ---s'\n\tFor calculet the Area of a carcle Enter ---c\n\t\tFor calculet the Area of a rectangular Enter--r\n\n ");
    char c;
    for(int a=0;a<10;a++){
                      printf("Enter :");
                      scanf("%c",&c);;
                      if(c=='s'){
                         printf("\n\n---------------------------------------------SQUAR--------------------------------------------------\n");
                         printf("\nEnter the side value of a squar :");
                         scanf("%f",&a);
                         sqa(a);
                         
                     }
                      else if(c=='c'){
                         printf("\n\n---------------------------------------------CASRCLE----------------------------------------------------\n");
                         printf("\nEnter the redius of a carcle :");
                         scanf("%f",&a);
                         cla(a);
                         break;
                     }  
                      else if(c=='r'){
                         printf("\n\n---------------------------------------------RECTANGULER--------------------------------------------------\n");
                          printf("\nEnter the length of rectanguler :");
                         scanf("%f",&a);
                          printf("\nEnter the width of a rectanguler :");
                         scanf("%f",&b);
                         rca(a,b); 
                         break;
                     }
                      else{
                         printf("\nInvalid input\n\n");
                     }}
                          printf("\n\n----------------------------------------------Thank You------------------------------------------------------");
 return 0;
 }


