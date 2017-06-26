//  .____    .__                _________              __                  
//  |    |   |__| ____   ____  /   _____/ ____   ____ |  | __ ___________  
//  |    |   |  |/  _ \ /    \ \_____  \_/ __ \_/ __ \|  |/ // __ \_  __ \ 
//  |    |___|  (  <_> )   |  \/        \  ___/\  ___/|    <\  ___/|  | \/ 
//  |_______ \__|\____/|___|  /_______  /\___  >\___  >__|_ \\___  >__|    
//          \/              \/        \/     \/     \/     \/    \/        

/* 

Copyright <2017> <Austin Gomez>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <fstream>


using namespace std;
#include "helpTesting.h"
#include "openURL.h"



void loopBack()
{
	std::cout << "Hm" << endl;
}

void contribute()
{
std::cout << "You reached the contribute menu" << endl;
}

void license()
{
  string openLicense;
  std::cout << "This program is operating under the MIT License" << endl <<  endl;
  std::cout << "In addition, we ask that you refrain from using this Lionseeker for malciious purposes." << endl << endl;
  std::cout << "A copy of this license can be found in the files and on our Github page" << endl << endl;
  std::cout << "Please restart the program" << endl << endl;

}
void help()
{
	
  int Userselection;
  std::cout << "Welcome to the Help Module" << endl; 
  std::cout << "Press 1 to get our FAQ for commonly asked questions" << endl;
  std::cout << "Press 2 to be given the link to our Github page to submit bugs" << endl;
  std::cout << "Alternatively, press 3 to be given an email to submit bugs or concerns to our development team" << endl;
  std::cout << "If you would like to contribute to this project please press 4, and you will be redirected to our Github issue pages" << endl;
  std::cout << "Press 5 to go back to the main menu" << endl;

	// This is the user input module. In order for it to work please remove comment marks
  cin >> Userselection;
  
  switch (Userselection) {

	case 1:
		cout << "Here is our most commonly asked problems:" << endl << endl;
		cout << "1: TBA" << endl;
		cout << "2: TBA" << endl;
		cout << "3: TBA" << endl;
		cout << "4: TBA" << endl;
		cout << "5: TBA" << endl;

		break;
	case 2:
		cout << "Redirecting you to our Github page" << endl;
	    
		break;
	case 3: 
		cout << "Here is our email address to contact us. Upon contacting us someone will answer you promptly" << endl;
		break;
	case 4:
		cout << "Would you like to contribute? Excellent! We will redirect you to our Github page shortly" << endl;
		break;
	case 5: 
		cout << "Taking you back to the main menu" << endl;
		break;
	default:
		cout << "That is not a valid number!" << endl;
		cout << "You entered " << Userselection << endl;

	}
	

}

void start()
{
  std::cout << "Welcome to the Start Page." << endl;
}


void wrong_answer(string incorrect) {
  std::cout << "You entered the value" << incorrect << "This is invalid. Please check your keyboard carefully and try again" << std::endl;
}


int main() {

    string initial_input;
	int InputValidation = 0;
	//const string potentialInputs[5] = { "-s","-h","-l","-c" };
	std::cout << InputValidation << endl;
	while (InputValidation == 0)
	{
		
		std::cout << " Welcome to the Lionseeker Platform!" << endl << endl;
		std::cout << "We want to help you find SQL Injections." << endl << endl;
		std::cout << "We strongly discourage using our tool for malicious purposes" << endl << endl;
		std::cout << "type -s to get started, -h for help,-l license purposes, and -c if you wish to contribute" << endl << endl;
		std::cout << "Version 0.0.1 Early Alpha" << std::endl;

		//TODO(AustinProg) Need to do lots of refactoring on this

		cin >> initial_input;
		if (initial_input == "-s")
		{
			//Goes to the start module
			start();
			InputValidation = 1;
			break;
		}
		
		if (initial_input == "-h")
		{
			// Goes to the help module
			help();
			InputValidation = 1;
			break;
		}

		if (initial_input == "-l")
		{
			// Goes to the license agreement module
			license();
			InputValidation = 1;
			break;
		}

		if (initial_input == "-c")
		{
			// Goes to the contribution argeement module
			InputValidation = 1;
			break;
		}
		else
		{
			std::cout << "The command that you entered is invalid. Please try again" << endl;
		}


		std::cout << InputValidation << endl;
	}
	



    return 0;
}
