/*

*/

#include <iostream>
#include <string>

using namespace std;

void contribute()
{
std::cout << "You reached the contribute menu" << endl;
}
void license()
{
std::cout << "You license menu." << endl;
}
void help()
{
std::cout << "You reached the help menu. The most important of all functions" << endl;
}

void start()
{
std::cout << "You reached the start menu. The most important of all other functions" << endl;
}

void wrong_answer(string incorrect) {
  std::cout << "You entered the value" << incorrect << "This is invalid. Please check your keyboard carefully and try again" << std::endl;
}

int main() {
    string initial_input;

    std::cout << " Welcome to the Lionseeker Platform!" << endl;
    std::cout << "We want to help you find SQL Injections." << endl;
    std::cout << "We strongly discourage using our tool for malicious purposes" << endl;
    std::cout << "type -s to get started, -h for help,-l license purposes, and -c if you wish to contribute" << endl;
    std::cout << "Version 0.0.1 Early Alpha" << std::endl;

    cin >> initial_input;
    // I should likely refactor this into a case statement some time.
    if (initial_input == "-s")
    {
      start();
    }

    if (initial_input == "-h")
    {
      help();
    }

    if (initial_input == "-l")
    {
      license();
    }

    if (initial_input == "-c")
    {
      contribute();
    }

    if (initial_input != "-s")
    {
      wrong_answer(initial_input);

    }

    // Implement the driver or some other testing method here. 

    return 0;
}
