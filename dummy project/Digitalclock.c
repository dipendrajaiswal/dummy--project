#include<stdio.h>
#include<time.h>
int main()
{
  int hour,minute,second;
  hour=minute=second=0;

  while(1)
  {
    system("clear");

    printf("\n\n\t\t\t%02d : %02d : %02d",hour,minute,second);

    {
    printf(" AM");}
    printf("\n\n\t\t\t Monday 21 march 2019   ");


   fflush(stdout);

    second++;

    if(second==60)
    {
      minute+=1;
      second=0;
    }

      if(minute==60)
      {
        hour+=1;
        minute=0;
      }
    if(hour==24)
    {
     hour=0;
     minute=0;
     second=0;
    }
  sleep(1);

  }

return 0;

}
