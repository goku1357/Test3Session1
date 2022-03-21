#include<stdio.h>
typedef struct
{
int num,den;
}fraction;
fraction input_fraction()
{
  fraction n;
  scanf("%d %d",&n.num,&n.den);
  return n;
}
fraction smallest_fraction(fraction f1, fraction f2, fraction f3)
{
  fraction largest;
  float a,b,c;
  a=f1.num/f1.den;
  b=f2.num/f2.den;
  c=f3.num/f3.den;
  if(a<b && a<c)
  {
    largest=f1;
  }
  else if(b<a && b<c)
  {
    largest=f2;
  }
  else
  {
    largest=f3;
  }
  return largest;
  
}
void output(fraction largest)
{
  printf("the smallest is %d / %d",largest.num,largest.den);
  
}

int main()
{
  fraction n1,n2,n3;
  n1=input_fraction();
  n2=input_fraction();
  n3=input_fraction();
  fraction largest;
  largest=smallest_fraction(n1,n2,n3);
  output(largest);
}