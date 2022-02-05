# the compiler: gcc for C program, define as g++ for C++
#GXX=g++
GXX=gcc

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#CXXFLAGS=-std=c++17 -Wall
CXXFLAGS=-Wall

# the build target executable:
TARGET=main

all: $(TARGET)

$(TARGET): $(TARGET).cc
	$(GXX) $(CXXFLAGS) -o test $(TARGET).cc

clean:
	$(RM) $(TARGET)                       
