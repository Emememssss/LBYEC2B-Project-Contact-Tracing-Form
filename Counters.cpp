#include <stdio.h>
#include "header.h"
#include <fstream>
#include <iostream>
#include <strings.h>


using namespace std;

int Counters(int loop, struct person ppl, int* vaccineYY, int* vaccineNN, int* quarantinedYY, int* malecounterr, int* femalecounterr)
{
    int i;
    int vaccineY;
    int vaccineN;
    int quarantinedY;
    int malecounter;
    int femalecounter;

    vaccineY = 0;
    vaccineN = 0;
    quarantinedY = 0;
    malecounter = 0;
    femalecounter =0;

    string stringY = "Y";
    string stringN = "N";
    string Male = "M";
    string Female = "F";
    
    //counters incrementation
    for(i=1; i<=loop; i++)
    {
        //Vaccine
                if(ppl.vaccine[i] == stringY)
                       {
                         vaccineY += 1;
                       }


        //Unvaccinated
                if(ppl.vaccine[i] == stringN)
                    {
                        vaccineN += 1;
                       
                    }


        //Quarantined
                if(ppl.quarantine[i] == stringY)
                {
                    quarantinedY += 1;
                }
        

        //Male
                if(ppl.sex[i] == Male)
                {
                    malecounter+=1;
                }

        //Female

                if(ppl.sex[i] == Female)
                {
                    femalecounter+=1;
                }
    }
    
    //counters output
            
            *vaccineYY = vaccineY;
            *vaccineNN = vaccineN;
            *quarantinedYY = quarantinedY;
            *malecounterr = malecounter;
            *femalecounterr = femalecounter;
    
            
 };


