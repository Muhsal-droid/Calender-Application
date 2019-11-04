#include <stdio.h>
#include <stdlib.h>

/*
 *   Program name: DaysCalculatorA
 *   Author: Muhammad Salmaan
 */

int main ( int argc, char *argv[] ) {

   /* Names of the months */
   char *monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
                      "October", "November", "December" };

   /* The number of days in each month */
   int monthLength[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
   int DayofYear[12] = {1,32,60,91,121,152,182,213,244,274,305,335};
   
   int leapyear[12] = {1,32,61,92,122,153,183,214,245,275,306,336};
   
   
   int dd = 0;
   int mm = 0;
   int yyyy = 0;
   int dd2 = 0;
   int mm2 = 0;
   int yyyy2 = 0;

   


   if ( argc < 7 ) {
      printf ( "Usage: ./dates mm dd yyyy dd2 mm2 yyyy2\n" );
      exit ( 1 );
   } else {
      dd = atoi ( argv[1] );
      mm = atoi ( argv[2] );
      yyyy = atoi ( argv[3] );
      dd2 = atoi ( argv[4] );
      mm2 = atoi ( argv[5] );
      yyyy2 = atoi ( argv[6] );
   }
 
      if (mm < 0 || mm > 12  ) {
      printf ( " Error - the month entered (%d) is not in the proper range (1-12)", mm);
      exit ( 1 );
   }
       if ( dd > monthLength[mm-1] || dd < 0 ) {
      printf ( " Error - you entered (%d) for the day and that is not in the range of (1-%d)", dd,monthLength[mm-1]);
      exit ( 1 );
   }
      if (mm2 < 0 || mm2 > 12  ) {
      printf ( " Error - the month entered (%d) is not in the proper range (1-12)", mm);
      exit ( 1 );
   }
       if ( dd2 > monthLength[mm-1] || dd2 < 0 ) {
      printf ( " Error - you entered (%d) for the day and that is not in the range of (1-%d)", dd,monthLength[mm-1]);
      exit ( 1 );
   }
     if (yyyy%400 == 0  ) {
    (DayofYear[mm-1] == leapyear[mm-1]);
   }
     else if (yyyy%100 == 0) {
    (DayofYear[mm-1] != leapyear[mm-1]);
   }
      else if (yyyy%4 == 0) {
    (DayofYear[mm-1] == leapyear[mm-1]);
   }
     else if (yyyy2%400 == 0  ) {
    (DayofYear[mm-1] == leapyear[mm-1]);
   }
     else if (yyyy2%100 == 0) {
    (DayofYear[mm-1] != leapyear[mm-1]);
   }
      else if (yyyy2%4 == 0) {
    (DayofYear[mm-1] == leapyear[mm-1]);
   }
     

   int startdate = DayofYear[mm-1] + dd  ;
   int enddate = DayofYear[mm2-1] + dd2  ;
   int numberofdays = enddate - startdate ;



   printf ("%d \n", numberofdays);     

   return ( 0 );

}
  
