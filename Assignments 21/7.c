  /*Write a program to calculate the difference between two time periods. */
  #include<stdio.h>
  #include<string.h>
  struct time
  {
    int seconds;
    int Minutes;
    int hours;
  };
  int main()
  {
    int i;
    struct time start_time,stop_time,differnce;
    printf("Enter the start time ");
    printf("Enter hours, minutes and seconds ");
    scanf("%d %d %d",&start_time.hours,&start_time.Minutes,&start_time.seconds);
    printf("Enter the value of stop time ");
    printf("Enter hours, minutes and seconds ");
    scanf("%d %d %d",&stop_time.hours,&stop_time.Minutes,&stop_time.seconds);
    while(start_time.seconds < stop_time.seconds)
    {
      --start_time.Minutes;
      start_time.seconds+=60;
    }
    differnce.seconds = start_time.seconds-stop_time.seconds;
    while(start_time.Minutes < stop_time.Minutes)
    {
      --start_time.hours;
      start_time.Minutes+=60;
    }
    differnce.Minutes = start_time.Minutes-stop_time.Minutes; 
    differnce.hours = start_time.hours-stop_time.hours;
    printf("%d Hours %d minutes %d seconds ",differnce.hours,differnce.Minutes,differnce.seconds);    
  return 0;
  }