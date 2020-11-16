#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

long zamiana(string nazwaPliku)
{
ifstream file;
ofstream fileOut;
file.open("plik.txt");
fileOut.open("wynik.txt");
string sys,liczba;
char* endptr;
int system;

if(file.good())
while(!file.eof())
    {
        file>>system>>sys;
        liczba=strtol(sys.c_str(),&endptr,system);
        cout<<liczba;
        fileOut<<liczba;
    }
file.close();
fileOut.close();
}

int main(int argc, char** argv) 
{
	zamiana("plik.txt");

return 0;
}
