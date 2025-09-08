#include<stdio.h>
int main()
{
   int r,c,i,j;
   printf("enter number of rows and columns  \n"); 
   scanf("%d%d",&r,&c);
   for(i=1;i<=r;i++) 
{    for(j=1;j<=c;j++)
       printf("*  ");
     printf("\n");}
 return 0;    
}