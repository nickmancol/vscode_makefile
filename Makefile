#
# A simple makefile for compiling a c++ project
#
SRC=./src
TARGET=./target
GCC = g++
CFLAGS = -o $(TARGET)/CoinFlipper.out
ARGS = 101
RM = rm -rf

all: clean default test

default: CoinFlipper.cpp

CoinFlipper.cpp: 
	$(GCC) $(CFLAGS) $(SRC)/main/CoinFlipper.cpp

test: CoinFlipper.cpp
	$(TARGET)/CoinFlipper.out $(ARGS)

clean: 
	$(RM) $(TARGET)/*.out