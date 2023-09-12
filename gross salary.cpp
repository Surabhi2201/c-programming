#include<stdio.h>
int main ()
{
int a,b,c,d,e,f;
scanf("%d%d",&a,&b);
c=0.8*a, d=0.48*a;
 if(b==1)
 e=0.12*a;
 else if(b==2)
 e=0.16*a;
  else if(b==3)
 e=0.24*a;
 else
 e=0.27*a;
 
 f=a+b+d+c;
 printf("the gross salary of individual is %d",f);
 return(0);

}
