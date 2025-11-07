#include<stdio.h>
void main()
{   int a[100],n,rot,temp;
    printf("enter limit of array >");
    scanf("%d",&n);
    printf("enter elements >");
    for (int i=0;i<n;i++)
     {  scanf("%d",&a[i]);
     }
    printf("enter number of rotations >");
    scanf("%d",&rot);
    for(int i=0;i<rot;i++)
    {   temp=a[0];
        for(int j=0;j<n;j++)
          { 
             if (j!=(n-1))
                a[j]=a[j+1];
             else 
                a[j]=temp;
          }
    }
    printf("rotated array is ");
    for (int i=0;i<n;i++)
     {  
        printf(" %d ",a[i]);
     }
}