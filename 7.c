#include<stdio.h>
void main()
{
float fr,centi;
printf("\n Enter the temperature(F)");
scanf("\n %f",&fr);
centi=5.0/9.0*(fr-32);
printf("\n Temperature in centigrade=%f",centi);
}
