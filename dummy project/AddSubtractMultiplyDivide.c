#include<stdio.h>
int main()
{
  int first,second,add,subtract,multiply;
  float divide;
  printf("enter two integers");
  scanf("%d%d",&first,&second);

  add=first+second;
  subtract=first-second;
  multiply=first*second;
  divide=first/second;

   printf("sum=%d",add);
   printf("difference=%d",subtract);
   printf("multiplication=%d",multiply);
   printf("division=%d",divide);
   return 0;

}
