# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11

# Directories
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build

# Targets
EXECUTABLE = $(BIN_DIR)/main
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Build rules
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)/*

.PHONY: all clean