// File:     constants.h
// Author:   Kevin Truong
// Modified: 03/04/22

#ifndef CONSTANTS_H
#define CONSTANTS_H

// prompt the user for an octal representation of an unsigned integer
extern const char* PROMPT;
// response when the input is not a valid octal number i.e. 09A
extern const char* NO_INPUT;
// response when no input was given by the user
extern const char* INVALID_OCT;
// response when the input cannot be converted using a signed integer 
extern const char* INVALID_SIGNED_INT_OCT;
// In C++, the octal representation of the maximum signed integer is "17777777777"
const int MAX_INT_OCTAL_LENGTH = 11;

#endif
