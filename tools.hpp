// File:     tools.cpp
// Author:   Kevin Truong
// Modified: 03/04/22

#include <iostream>
#include <exception>

using namespace std;

// asks the user for an octal representation of an unsigned integer
string input();
// determines if the input is a valid octal number
bool isOctal(string rawInput);
// converts an octal to decimal format
int octalToDecimal(string octal);
// evaluates an exponent expression into its decimal representation
// REMARKS: exponent is non-negative and a whole number
int power(int base, int exponent); 
// determines if the octal representation of an unsigned integer can be 
// representated as a signed integer
// REMARKS: assumes the input is in the format of an octal via isOctal()
bool canRepOctAsSignedInt (string octal);
