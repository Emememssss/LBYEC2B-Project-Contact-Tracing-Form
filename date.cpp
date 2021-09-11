#include <ctime>
#include "header.h"

void date(){


   time_t t;
   time(&t); //time since january 1, 1970

   char *current_time = ctime(&t);

   printf("%s",current_time);
};