#include <iostream>
#include <ctime>
#include "header.h"
#include "date.cpp"
#include "TimeCounter.cpp"

using namespace std;

int gatherinfo(int i, int* morning, int* afternoon, int* evening)
{
    int morningcounterr; 
    int afternooncounterr; 
    int eveningcounterr;
    cout<<"Entry: "; date(); cout<< "\n\n";
    timecounter(&morningcounterr, &afternooncounterr, &eveningcounterr);
    
    cin.ignore();
    cout<<"Name: ";
    std::getline(cin, ppl.name[i]);

    cout<<"Address: ";
    std::getline(cin,ppl.address[i]);

    cout<<"Age: ";
    std::getline(cin,ppl.age[i]);

    cout<<"Sex (M/F): ";
    std::getline(cin,ppl.sex[i]);

    cout<<"Vaccinated (Y/N): ";
    std::getline(cin,ppl.vaccine[i]);

    cout<<"Quarantined for the past 14 days? (Y/N): ";
    std::getline(cin,ppl.quarantine[i]);

    cout<<"List persons recently had in contact with: ";
    std::getline(cin,ppl.contactppl[i]);

    cout<<"Contact Number: ";
    std::getline(cin,ppl.contactno[i]);

    cout<<"Email Address: ";
    std::getline(cin,ppl.email[i]);

    cout<<"List your travels for the last 14 days: ";
    std::getline(cin,ppl.travelhistory[i]);

    cout<<"\n\nPress any key to confirm   ";
    getchar();
    system("clear");

    *morning = morningcounterr;
    *afternoon = afternooncounterr;
    *evening = eveningcounterr;

    // //for double checking
    // cout<<ppl.name[i]; cout<<"\n";
    // cout<<ppl.address[i];cout<<"\n";
    // cout<<ppl.age[i]; cout<<"\n";
    // cout<<ppl.sex[i];cout<<"\n";
    // cout<<ppl.vaccine[i];cout<<"\n";
    // cout<<ppl.quarantine[i];cout<<"\n";
    // cout<<ppl.contactppl[i];cout<<"\n";
    // cout<<ppl.contactno[i];cout<<"\n";
    // cout<<ppl.email[i];cout<<"\n";
    // cout<<ppl.travelhistory[i];cout<<"\n";

};