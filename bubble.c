#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter limit of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements  ");
    for(int i=0;i<n;i++)
       { scanf("%d",&a[i]); }
    for(int i=0;i<n-1;i++)
       {for(int j=0;j<n-1-i;j++)
        {if (a[j]>a[j+1])
            { temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
       }
    printf("the sorted array elements are [");
    for(int i=0;i<n;i++)
     { printf("%d ",a[i]);
     }
     printf("]\n");
     return 0;
    }
