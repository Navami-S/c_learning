#include<stdio.h>
int main(){
    float a,b;
    char op;
    float s;
    scanf("%f%c%f",&a,&op,&b);
    if (op == '+')
       s=a+b;
    else if (op == '-')
      s=a-b;
    else if ((op=='*')||(op=='x'))
       s=a*b;
    else if (b==0)
      { printf("zero division not possible");
       return 0;}
    else 
        s=a/b;
    printf("%f",s);
    return 0;
    
    


    


    
}