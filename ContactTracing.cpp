#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <strings.h>
#include <iostream>
#include "header.h"
#include "form.cpp"
#include "OutputWriter.cpp"
#include <fstream>

using namespace std;

int main()
{
    int i;
    char continuee; 
    char magicword[200]; int magicwordd;
    char stop[5] = "stop";
    int counter;


    system("clear"); //for macOS  
    //system("clc"); //i think this is for windows
    cout<<"=====================  Welcome to the COVID-19 Database Program  =====================\n\n";
    counter=0;
    cout<<"\n\n"; 
    cout<<"Made by: \n\n";
    cout<<"Fransisco, Edgardo Jr.         - BS - ECE  - ID 119\n";
    cout<<"Umali, Allan Emmanuel B. Umali - BS - ECE  - ID 119\n";
    cout<<"Valencia, Jenine               - BSMS-ECE - ID 119\n";
    cout<<"Yap, Patricia Angela           - BS-IE-IT - ID 119\n\n\n";
    cout<<"This is a startup entry\n";
    cout<<"type 'stop' when prompted to exit and save program\n\n";
    cout<<"Press any key to continue...";
    cout<<"\n\n\n\n\n";
    cout<<"© Term 3 - S.Y. 2020 - 2021";
    getchar();

    // date();
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
        save(counter,ppl);
        return 0;
    }

    system("clear"); 
    counter+=1;
    cout<<"Entry no. " <<counter; cout<<"\n\n";
    gatherinfo(counter);
    }


}
