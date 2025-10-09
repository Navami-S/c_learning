#include<stdio.h>
void main()
{   int n,s,m ;
   do {  
    int rev=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
      {  s=n%10;
         rev=(rev*10)+s;
         n=n/10;
      }
    printf("%d",rev); 
    printf("press 0 if u want to exit, press 1 to continue");
    scanf("%d",&m);}
    while (m==1);
         
      }






