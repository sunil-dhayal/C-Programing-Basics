#include<stdio.h>
void main()
{ char s[80];int i,j=0;;
printf("enter your thing\n");
gets(s);
    for(i=0;s[i]!='\0';i++)
    { if((s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')&&(s[i+1]=='A'||s[i+1]=='E'||s[i+1]=='I'||s[i+1]=='O'||s[i+1]=='U'))
        j++;
    }
    printf("\nOCCURENCE OF TWO VOWELS CONSECUTIVELY=%d",j);








}
