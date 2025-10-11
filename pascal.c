#include<stdio.h>
int main()
 {  int rows,i,g,j,num;
    printf("enter number of rows  ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
     { for (j=0;j<(rows-i);j++)
         { printf(" ");}
         num=1;
         for (g=0;g<=i;g++)
           { printf("%d ",num);
             num=num*(i-g)/(g+1);
           }
         printf("\n");
        }
    return 0;

    
    }