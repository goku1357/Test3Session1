#include<stdio.h>
int input_size()
{
  int n;
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n, int a[n])
{
  int b=0;
  for(int i=0;i<=n;i++)
    {
      if (a[b]<a[i])
      {
          b=i;
      }
        
    }
  return b;
}
void out_put(int b)
{
  printf("the largest is in index of %d",b);
}

int main()
{
  int a[40];
  int n=input_size();
  input_array(n,a);
  int b=find_largest(n,a);
  out_put(b);
}