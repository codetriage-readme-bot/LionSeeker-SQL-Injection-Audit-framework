/*

*/

#include <iostream>
#include <string>

using namespace std;

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
std::cout << "This program is operating under the MIT License" << endl;
std::cout << "In addition, we ask that you refrain from using this Lionseeker for malciious purposes." << endl;
std::cout << "A copy of this license can be found in the files and on our Github page" << endl;
std::cout << "Please restart the program" << endl;

}
void help()
{
std::cout << "You reached the help menu." << endl;
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


		std::cout << " Welcome to the Lionseeker Platform!" << endl;
		std::cout << "We want to help you find SQL Injections." << endl;
		std::cout << "We strongly discourage using our tool for malicious purposes" << endl;
		std::cout << "type -s to get started, -h for help,-l license purposes, and -c if you wish to contribute" << endl;
		std::cout << "Version 0.0.1 Early Alpha" << std::endl;

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
			std::cout << "The command that you entered is not valid. Please try again" << endl;
		}


		std::cout << InputValidation << endl;
	}
	


    return 0;
}
