  #include<stdio.h>
  int main()
  {
  int a,b=0,c=1,i;
  for(i=0;i<=5;i++)
  {
  a=b+c;
  b=c;
  c=a;
  printf("\n %d",a);
  }
  return 0;
  }
