// File:     tools.cpp
// Author:   Kevin Truong
// Modified: 03/04/22

#include "tools.hpp"
#include "constants.h"

// asks the user for an octal representation of an unsigned integer
string input() 
{
    string num;
    cout << PROMPT<< endl;
    cin >> num;
    return num;
}

// determines if the input is a valid octal number
bool isOctal(string rawInput)
{
    bool isOctal;
    int length = rawInput.length();

    for(int i = 0; i < length; i++)
    {
        char c = rawInput[i];
        isOctal = (c >= '0' && c <= '7');

        if (!isOctal)
        {
            return false;
        }
    }
    return true;
}

// converts an octal to decimal representation
int octalToDecimal(string octal)
{
    int decimal = 0;
    int exponent = 0, digit= 0;
    int length = octal.length();
    
    for(int i = length-1; i >= 0 ; i--)
    {
        digit = octal[i]-'0';
        decimal += digit * power(8,exponent);
        ++exponent;
    }
    return decimal;
}

// evaluates an exponent expression into its decimal representation
// REMARKS: exponent is non-negative and a whole number
int power(int base, int exponent) 
{
    if (exponent == 0) 
    {
        return 1;
    }
    else if (exponent == 1)
    {
        return base;
    }
    return base * power(base, exponent - 1);
}

// determines if the octal representation of an unsigned integer can be 
// representated as a signed integer
// REMARKS: assumes the input is in the format of an octal via isOctal()
bool canRepOctAsSignedInt (string octal)
{
    // MAX_INT_OCTAL = 17777777777
    int length = octal.length();
   
    // can assume octal is in the range if the octal length is less than the 
    // length of the greatest possible octal (for signed integers)
    if (length < MAX_INT_OCTAL_LENGTH) 
    {
        return true;
    }

    // in the case where the input octal has leading 0's or is the has the same
    // length as the greatest possible octal (signed integers)
    if (length >= MAX_INT_OCTAL_LENGTH)
    {
        for (int i = 0; i < length - MAX_INT_OCTAL_LENGTH; i++)
        {
            if (octal[i] != '0')
            {
                return false;
            }
        }
        return octal[length - MAX_INT_OCTAL_LENGTH] <= '1';
    }

    return true;
}


