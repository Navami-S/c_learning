#include<stdio.h>
void seq(int a[],int n,int key)
{  int found=0;
   for(int i=0;i<n;i++) 
     { if(a[i]==key)
         {printf("found at pos %d\n",i);
          found =1;
         }
     }
    if (found==0)
       printf("not found");
}
int main()
{   int a[100],n,key;
    printf("enter limit of array >");
    scanf("%d",&n);
    printf("enter elements >");
    for (int i=0;i<n;i++)
     {  scanf("%d",&a[i]);
     }
    printf("enter element to search >");
    scanf("%d",&key);
    seq(a,n,key);
    return 0;
}
