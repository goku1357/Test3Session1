#include<stdio.h>
int input_n_and_r()
{
  int a;
  scanf("%d",&a);
  return a;
}
int ncr(int n, int r)
{

  int nf=1,rf=1;
  for(int i=1;i<=n;i++)
    {
      nf=nf*i;
    }

  
  for(int i=1;i<=r;i++)
    {
      rf=rf*i;
    }
    
    
  int gg;
  gg=1;
  
  for(int i=1;i<=(n-r);i++)
  {
      gg=gg*i;
  }
  long c;
  c=nf/(gg*rf);
  return c;
}
  
void output(int c)
{
  printf("the answer is %d",c);
  
}

int main()
{
  int n,r;
  n=input_n_and_r();
  r=input_n_and_r();
  long c=ncr(n,r);
  output(c);
}