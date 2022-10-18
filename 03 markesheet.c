#include<stdio.h>
int main()
{
    int i;
    double total_markes[10];
        int ft_markes[10]  = {45, 55, 65, 75, 85, 95, 35, 25, 15, 21 };
        int st_markes[10]   = {15, 25, 35, 95, 85, 75, 65, 55, 45, 23};
        int final_markes   = {86, 64, 91, 73, 43, 55, 66, 88, 77, 59, 87, 49, 32};

          for(i = 0; i<10; i++){
            total_markes[i] =  ft_markes[i] / 4.0 + st_markes[i] / 4.0 + final_markes / 2.0;
          }
          for ( i = 1 ; i < 10; i++)
          {
              printf("Roll No: %d\total markes: %0.0lf\n", i , total_markes[i-1]);
              //Code By Pobitro Debnath
          }
          return 0;
}



