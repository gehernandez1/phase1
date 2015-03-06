//################################################################//
//Name: Gerardo Hernandez
//Class: CMPE 3334
//Project Phase 1
//Description:
// The code below works as a very simple operating system,
// it detects if the command exists and if it has the right number
// of parameters. If the wrong command is entered, the program will
// let the user now that the command is not valid and will print
// a list of available commands.
//################################################################//
//comment
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include "commands.h"
#include "helperFunctions.h"

using namespace std;


int main(int argc, char* argv[])
{
	string prompt ;//stores the user input
	string params[10] ;//stores every command and parameter as a single string
	int arrayCount = 0;
	int cmdCount =0 ;
	bool flag = true ;
	string commands[]= {"load","execute","debug","dump","help","assemble","directory", "dir","exit"};


	cout << "Welcome to phase 1 Gerardo's Interpreter" << endl ;

	while(prompt != "exit")
	{

        for(int i = 0 ; i < arrayCount ; i++)
          {
            params[i]= "";
        }

	cmdCount = 0 ; 
	arrayCount = cmdCount +1 ;
        
        cout << ">> " ;
        getline(cin,prompt);

	system("clear");

        //this line counts how many commands there is in the line
        for(int i = 0 ; i < prompt.length() ; i++)
        {
		flag = true ;
		
		if(prompt[i] == ' ' || prompt[i] == '\t')
		{ 
		  flag = false ;
		}
		
		while(flag)//prompt[i] != ' '|| prompt[i] != '\t')
		{
            		if(prompt[i+1] == ' ' || prompt[i+1] == '\t')//&& prompt[i+1] != ' ')
            		{
                		//if there is a space then add one to arraycount and command counter
				params[cmdCount] += prompt[i] ;
	      			cmdCount++ ;
	      			arrayCount++ ;
				break;
   
            		}
			else if(prompt[i] == '\n' )
	     		{
				cmdCount++ ;
				arrayCount++ ;
				break ;

	     		}
	    		else
	     		{
	       			params[cmdCount] += prompt[i];
				break ;

	     		}

        	}
	}
 
	if(verifyCommand(params[0],commands))
	  {
	    cout << "Command does not exist, here a list of " ;
	    helpCommand();
	  }

	commandMeetReqs(params,arrayCount);
     
	}
	

return 0;
}



