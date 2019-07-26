#include <stdio.h>
int main ()
{
  float s,su,m,d,mo;
  int ch,a,b;
  printf("ENTER THE CHOICE FROM THE GIVEN MENU \n");
  printf("Enter 1 for addition \n");
  printf("Enter 2 for subtraction \n");
  printf("Enter 3 for multiplication \n");
  printf("Enter 4 for division \n");
  printf("Enter 5 for modulus \n");
  scanf("%d",&ch);
  printf("Enter the first number \n");
  scanf("%d",&a);
  printf("Enter the second number \n");
  scanf("%d",&b);
  switch(ch)
  {
     case 1:s=a+b;
            printf(" Sum = %f \n",s);
            break;
     case 2:su=a-b;
            printf("Subtraction = %f \n",su); 
            break;      
     case 3:m=a*b;
            printf("Multiplication = %f \n",m); 
            break;      
     case 4:d=(a*1.0)/b;
            printf("Division = %f \n",d);
            break; 
     case 5:mo=a%b;
            printf("Modulus = %f \n",mo); 
            break;            
  }
  return 0;
}
            
