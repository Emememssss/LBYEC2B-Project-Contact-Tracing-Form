#include <fstream>
#include "header.h"
#include <ctime>
#include <iostream>
// #include <sys/stat.h>
// #include <sys/types.h>

using namespace std;

void save(int loop, struct person ppl)
{   
    int i;
    char* title;

    ofstream fileOut;
    title = date();
    fileOut.open(title);

    for(i=1; i<=loop; i++){
    fileOut<<title; fileOut<<"\n\n";
    fileOut<<"Entry: "<<i<<"\n\n\n";
    fileOut<<"Name:            "<<ppl.name[i]; fileOut<<"\n";
    fileOut<<"Address:         "<<ppl.address[i];fileOut<<"\n";
    fileOut<<"Age:             "<<ppl.age[i]; fileOut<<"\n";
    fileOut<<"Sex:             "<<ppl.sex[i];fileOut<<"\n";
    fileOut<<"Vaccinated:      "<<ppl.vaccine[i];fileOut<<"\n";
    fileOut<<"Quarantined:     "<<ppl.quarantine[i];fileOut<<"\n";
    fileOut<<"Recent Contacts: "<<ppl.contactppl[i];fileOut<<"\n";
    fileOut<<"Contact Number:  "<<ppl.contactno[i];fileOut<<"\n";
    fileOut<<"Email:           "<<ppl.email[i];fileOut<<"\n";
    fileOut<<"Travels:         "<<ppl.travelhistory[i];fileOut<<"\n\n\n";
    }

} 