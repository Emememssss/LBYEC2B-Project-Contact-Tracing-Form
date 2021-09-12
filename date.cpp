#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <ctime>
#include <time.h>
#include "header.h"

char* date(){
   time_t t;
   time_t time2;
   time_t DateTime;
   time(&t); //time since january 1, 1970
   char *current_time = ctime(&t);
   
//   //Morning, Afternoon, Evening counter
//   DateTime; time2 = new DateTime(2);
//   //Morning
//   if (time2.Hour >= 0 && time2.Hour < 12)
//   {
//   		ppl.morning++;
//   		cout<<"\nGood Morning!\n";
//   }
//   //Afternoon
//    if (time2.Hour >= 12 && time2.Hour < 18)
//   {
//   		ppl.afternoon++;
//   		cout<<"\nGood Afternoon!\n";
//   }
//	
//	if (time2.Hour >= 18)
//   {
//   		ppl.evening++;
//   		cout<<"\nGood Evening!\n";
//   }
	

   printf("%s",current_time);
   printf("%s",ctime(&t));
   return current_time;
};
