# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Files
SRCS = $(SRC_DIR)/main.cc $(SRC_DIR)/MyAI.cc $(SRC_DIR)/score.cc
OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/MyAI.o $(OBJ_DIR)/score.o
TARGET = $(BIN_DIR)/MyAI.exe

# Main target
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation step
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	if exist $(OBJ_DIR) rmdir /s /q $(OBJ_DIR)
	if exist $(BIN_DIR) rmdir /s /q $(BIN_DIR)

# Phony targets
.PHONY: all clean
