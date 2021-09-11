#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <strings.h>
#include <iostream>
#include "header.h"
#include "form.cpp"

using namespace std;

int main()
{
    char continuee; 
    char magicword[200]; int magicwordd;
    char stop[5] = "stop";
    int counter;

    system("clear"); //for macOS  
    //system("clc"); //i think this is for windows
    cout<<"Welcome to the COVID-19 Database Program \n\n";
    counter=0;
    cout<<"This is a startup entry\n\n";
    cout<<"Press any key to continue...";
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
    }

    system("clear"); 
    counter+=1;
    cout<<"Entry no. " <<counter; cout<<"\n\n";
    gatherinfo(counter);
    }

}
