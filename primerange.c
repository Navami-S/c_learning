#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter lower range and upper range ");
    scanf("%d %d",&a,&b);
    for(int j=a;j<=b;j++)
    {  c=1;
     if(j<2)
      { continue;}
      for (int i=2;i<=(j/2);i++)
        { if((j%i)==0)
            { c=0;
              break;
            }
        }
      if(c==1)
       {  printf("%d\n",j);
       }
    }
}  

        

