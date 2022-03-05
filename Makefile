#----------------------------------------------------------
# Macro definitions
CXXFLAGS = -O1 -g -Wall -std=c++17
OBJ = main.o tools.o constants.o
TARGET = canon
#----------------------------------------------------------
# Rules
all : $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $@ $(OBJ)
clean:
	rm -f $(OBJ) $(TARGET)
#----------------------------------------------------------
# Dependencies
main.o: main.cpp tools.hpp constants.h
tools.o: tools.cpp tools.hpp constants.h
constants.o: constants.cpp constants.h
