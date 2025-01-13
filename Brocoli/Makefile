# Project directories
INCLUDE_DIR = include
SRC_DIR = src
LIB_DIR = lib

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -I$(INCLUDE_DIR)

# Source files
OBJ = main.o $(SRC_DIR)/Colors.o $(SRC_DIR)/Utilities.o $(SRC_DIR)/Brocoli.o
TARGET = main

# Build rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
