//################################################################//
//Name: Gerardo Hernandez
//Class: CMPE 3334
//Project Phase 1
//Description: 
//The following functions help the interpreter process lines and 
//check for valid commands among other useful functions
//###############################################################//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>

using namespace std;


/***** Helper commands********/

//verify if command exists
bool verifyCommand(string command,string* commandList);

//checks if the command is missing or has extra parameters
void commandMeetReqs(string* command,int counter);



//*********************************************************//


bool verifyCommand(string command,string* commandList)
{
    for(int i = 0 ; i < 9 ; i++)
    {
        if(command == commandList[i])
        return false ;
    }

return true ;
}

void commandMeetReqs(string* command,int counter)
{

  //checks to see if parameters are correct for the load command
  if(command[0] == "load" && counter == 2)
    {
      loadFile("test") ;
    }
  else if(command[0] == "load" && counter < 2)
    {
      cout << "Missing parameter" << endl ;
    }
  else if(command[0] == "load" && counter > 2)
    {
      cout << "You have extra parameters" << endl ;
    }


//checks to see if parameters are correct for the execute command
  if(command[0] == "execute" && counter == 1)
    {
      execute();
    }
  else if(command[0] == "execute" && counter > 1)
    {
      cout << "You have extra parameters" << endl ;
    }

//checks to see if parameters are correct for the debug command
  if(command[0] == "debug" && counter == 1)
    {
      debug();
    }
  else if(command[0] == "debug" && counter > 1)
    {
      cout << "You have extra parameters" << endl ;
    }

  //checks to see if parameters are correct for the dump command
  if(command[0] == "dump" && counter == 3)
    {
      dump(command[1],command[2]);
    }
  else if(command[0] == "dump" && counter < 3)
    {
      cout << "Missing parameter" << endl ;
    }
  else if(command[0] == "dump" && counter > 3)
    {
      cout << "You have extra parameters" << endl ;
    }

  //checks to see if parameters are correct for the help command
  if(command[0] == "help" && counter == 1)
    {
      helpCommand();
    }
  else if(command[0] == "help" && counter > 1)
    {
      cout << "You have extra parameters" << endl ;
    }

  //checks to see if parameters are correct for he assemble command
  if(command[0] == "assemble" && counter == 2)
    {
	assemble(command[1]);
    }
  else if(command[0] == "assemble" && counter < 2)
    {
      cout << "Missing parameter" << endl ;
    }
  else if(command[0] == "assemble" && counter > 2)
    {
      cout << "You have extra parameters" << endl ;
    }

  //checks to see if parameters are correct for the directory command
  if((command[0] == "directory"|| command[0] == "dir" ) && counter == 1)
    {
      directory();
    }
  else if((command[0] == "directory" || command[0] =="dir") && counter > 1)
    {
      cout << "You have extra parameters" << endl ;
    }

}

