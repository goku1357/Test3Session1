#include<stdio.h>
void input(int *a, int *b, int *c, int *d)
{
  scanf("%d",a);
  scanf("%d",b);
  scanf("%d",c);
  scanf("%d",d);
  
}
int add(int a,int b, int c, int d, int *n, int *dd)
{

  *n=(a*d)+(b*c);
  *dd=(b*d);
  int gcd;
  for(int i=1;i<=*n && i<=*dd;++i)
    {
      if(*n%i==0 && *dd%i==0)
      {
        gcd=i;
      }
    }
  return gcd;
}
void output(int n,int dd,int gcd)
{
  printf("the answer is %d / %d",n/gcd,dd/gcd);
  
}

int main()
{
  int a,b,c,d,n,dd;
  input(&a,&b,&c,&d);
  int gcd;
  gcd=add(a,b,c,d,&n,&dd);
  output(n,dd,gcd);
 
}