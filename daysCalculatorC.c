#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *   Program name: DaysCalculatorC
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
  
    

     char ddStr[3];
      ddStr[0] = argv[1][0];
      ddStr[1] = argv[1][1];
      ddStr[2] = '\0';
     char mmStr[3];
      mmStr[0] = argv[1][3];
      mmStr[1] = argv[1][4];
      mmStr[2] = '\0';
    char yyyyStr[5];
      yyyyStr[0] = argv[1][6];
      yyyyStr[1] = argv[1][7];
      yyyyStr[2] = argv[1][8];
      yyyyStr[3] = argv[1][9];
      yyyyStr[10] = '\0';
   
    char dd2Str[3];
      dd2Str[0] = argv[2][0];
      dd2Str[1] = argv[2][1];
      dd2Str[2] = '\0';
    char mm2Str[3];
      mm2Str[0] = argv[2][3];
      mm2Str[1] = argv[2][4];
      mm2Str[2] = '\0';
    char yyyy2Str[5];
      yyyy2Str[0] = argv[2][6];
      yyyy2Str[1] = argv[2][7];
      yyyy2Str[2] = argv[2][8];
      yyyy2Str[3] = argv[2][9];
      yyyy2Str[4] = '\0';

   int dd = atoi(ddStr);
   int mm = atoi(mmStr);
   int yyyy = atoi(yyyyStr);
   int dd2 = atoi(dd2Str);
   int mm2 =  atoi(mm2Str);
   int yyyy2 = atoi(yyyy2Str);
   
 int startDate[11] = {ddStr[3], mmStr[3],yyyyStr[5]};
     int endDate[11]= {dd2Str[3], mm2Str[3],yyyy2Str[5]};
     
   
   if ( argc < 3 ) {
      printf ( "Usage: ./calculatorC dd-mm-yyyy dd2-mm2-yyyy2 \n" );
      exit ( 1 );
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
    int startdate = DayofYear[mm-1] + dd   ;
    int enddate = DayofYear[mm2-1] + dd2 ;
    int numberofdays = enddate - startdate ;

      if (argc == 4 ) {
     (numberofdays = enddate - startdate + 1 );
     } else if (argc == 4 && strcmp("include", argv[4]) == 0 ) {
     (numberofdays = enddate - startdate + 1 );
     } 
   

   printf ("%d \n", numberofdays);     

   return ( 0 );

}
