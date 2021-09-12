#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int timecounter(int* morningcounterr, int* afternooncounterr, int* eveningcounterr)
{
    int hour;
	int morningcounter=0;
	int afternooncounter=0;
	int eveningcounter=0;
	time_t t;
	struct tm *now;
	t = time(0);
	now = localtime(&t);
	hour = now->tm_hour;
	//cout<<"Hour: "<<hour;
	
	if (hour >= 0 && hour < 12)
	{
		//cout<<"Morning";
		morningcounter++;
	}
	
	if (hour >= 12 && hour < 17)
	{
		//cout<<"Afternoon";
		afternooncounter++;
	}
	
    //EveningCounter
	if (hour >= 17 && hour < 24)
	{
		//cout<<"Evening";
		eveningcounter++;
	
	}
	
    //Counters Output
        *morningcounterr = morningcounter;
        *afternooncounterr = afternooncounter;
        *eveningcounterr = eveningcounter;

};