# Canon-U.S.A

# Relevant files 
Makefile
main.cpp
tools.cpp
tools.hpp
constants.cpp
constants.h

# Testing Instructions
Running the program:
1. Make
2. In the command line, enter './canon'
3. Enter in an octal representation of an unsigned integer

## Insights
1. Considerable error checking had to be done on the input:
    - If there was no input, there will be a message indicating that nothing entered.
    - The input had to be a valid octal value:
        - All characters had to be in the set [0,1,2,3,4,5,6,7]
    - Since the input is an octal representation of an *unsigned* integer and the output
      is a decimal representation of a *signed* integer, there could be some inputs that 
      cannot be represented as a signed integer since the leading digit of an unsigned 
      integer does not need to determine whether the value is positive or negative. 
      Assuming that the bit width of an unsigned integer and a signed integer is 
      4 bytes, the maximum octal value of an unsigned integer that can be use as input 
      is 17777777777 (Decimal: 2147483647). 
