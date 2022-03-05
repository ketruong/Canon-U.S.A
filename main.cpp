// File:     main.cpp
// Author:   Kevin Truong
// Modified: 03/04/22

#include "tools.hpp"
#include "constants.h"

// determines if the input is a valid octal representation of an unsigned int
bool isValid(string rawInput)
{
    // determines if there is input from the user
    if (rawInput.length() == 0)
    {
        cout << NO_INPUT << endl;
        return false;
    }
    
    // determine if input is a valid octal
    if (!isOctal(rawInput))
    {
        cout << INVALID_OCT << endl;
        return false;
    }

    // determine if the input can be represented using a signed integer
    if(!canRepOctAsSignedInt(rawInput))
    {
        cout << INVALID_SIGNED_INT_OCT << endl;
        return false;
    }

    return true;
}

// converts a valid octal representation of an unsigned int to decimal format 
// if the input is invalid, -1 will be returned
int parse(string rawInput) 
{
    bool valid = isValid(rawInput);
    
    if (valid)
    {
        return octalToDecimal(rawInput);
    }
    else
    {
        return -1;
    }
}

// driver
int main() 
{
    string rawInput = input();
    int  decimalRep = parse(rawInput); 
    if (decimalRep >= 0)
    {
        cout << decimalRep << endl;
    }
    return 1;
}
