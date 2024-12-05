include <stdio.h>

int max(int x,int y)
{
  return x>y?x:y;
}

main{
int a=10,b=11;
int c = max(a,b);
printf("%d",c);
}
