//################################################################//
//Name: Gerardo Hernandez
//Class: CMPE 3334
//Project Phase 1
//Description:This file contains the functions for each of the commands
//
//
//################################################################//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <cstring>

using namespace std;

/*****Functions **********/
//prints available commands
void helpCommand();

//loads file specified in parameter
void loadFile(string filename);

//executes loaded program in memory
void execute();

//executes in debug mode ;
void debug();

//dumps program in memory specified by start and end
void dump(string start, string end);

//assembles SIC assembly file and stores in file
void assemble(string filename);

//lists files store in current directory
void directory(){system("ls");}

/********************************************************/

void helpCommand()
{
  string commands[]= {"load","execute","debug","dump","help","assemble","directory","dir","exit"};
  cout << "Available Commands:" << endl ;
  for(int i = 0 ; i < 9  ;i++)
    {
      cout << commands[i] << endl ;
    }
}

void loadFile(string filename)
{
	cout << "Command Successful" << endl ;
}

void execute()
{
	cout << "Command Successful" << endl ;
}

void debug()
{
	cout << "Command Successful" << endl ;
}

void dump(string start,string end)
{
	cout << "Command Succesful" << endl ;
}

void assemble(string filename)
{
	char* test ;
	strcpy(test,filename);
	execlp(assemble,test);
cout << "Command Successful" << endl ;
}

void dir()
{
  directory();
}
