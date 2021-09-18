#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <strings.h>
#include <iostream>
#include "header.h"
#include "form.cpp"
#include "OutputWriter.cpp"
#include <fstream>
#include "Counters.cpp"

using namespace std;

int main()
{
    int i;
    int morning, afternoon, evening;
    char continuee; 
    char magicword[200]; int magicwordd;
    char stop[5] = "stop";
    int counter;
    int vaccineYY; int vaccineNN; int quarantineYY; int malecounterr; int femalecounterr;

    morning=0; afternoon=0; evening=0;
    int morningfrom, afternoonfrom, eveningfrom; 

    system("clear"); //for macOS  
    //system("clc"); //i think this is for windows
    cout<<"=====================  Welcome to the COVID-19 Database Program  =====================\n\n";
    counter=0;
    cout<<"\n\n"; 
    cout<<"Made by: \n\n";
    cout<<"Francisco, Edgardo Jr.         - BS - ECE - ID 119\n";
    cout<<"Umali, Allan Emmanuel B.       - BS - ECE - ID 119\n";
    cout<<"Valencia, Jenine               - BSMS-ECE - ID 119\n";
    cout<<"Yap, Patricia Angela           - BS-IE-IT - ID 119\n\n\n";
    cout<<"This is a startup entry\n";
    cout<<"type 'stop' when prompted to exit and save program\n\n";
    cout<<"Press any key to continue...";
    cout<<"\n\n\n\n\n";
    cout<<"© Term 3 - S.Y. 2020 - 2021";
    getchar();

    continuee=1;
    system("clear");

    while(continuee!=0)
    {
    cout<<"Press any letter to continue...";
    cout<<"\n";
    scanf("%s",&magicword);

    magicwordd = strcmp(magicword,stop);
    if(magicwordd==0){
        continuee=0;
        printf("Terminating...");
        Counters(counter,ppl,&vaccineYY, &vaccineNN, &quarantineYY, &malecounterr, &femalecounterr);
        save(counter,ppl,vaccineYY,vaccineNN,quarantineYY,malecounterr,femalecounterr,morning,afternoon,evening);

        return 0;
    }

    system("clear"); 
    counter+=1;
    cout<<"Entry no. " <<counter; cout<<"\n\n";
    gatherinfo(counter,&morningfrom,&afternoonfrom,&eveningfrom);
    morning = morning+morningfrom;
    afternoon = afternoon+afternoonfrom;
    evening = evening+eveningfrom;
    }
}
