#pragma once
#include <iostream>

using namespace std;

char* date();
void gatherinfo(int i);
void save(int loop, struct person ppl);

struct person
{
	double vaccinated = 0;
	double unvaccinated = 0;
	double customers = 0;
	double morning = 0;
	double afternoon = 0;
	double evening = 0;
	double attendees = 0;
	double quarantined = 0;
	std::string date[10000];
    std::string name[10000];
    std::string address[10000];
    std::string age[10000];
    std::string sex[10000];
    std::string vaccine[10000];
    std::string quarantine[10000];
    std::string contactppl[10000];
    std::string contactno[10000];
    std::string email[10000];
    std::string travelhistory[10000];
};

struct person ppl;
