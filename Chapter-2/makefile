CXX = g++
CFLAGS = -Wall -Wextra -g

# Directory path
SRC_DIR = .
BUILD_DIR = build

# Files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# List of executable corresponding to each .cpp file
EXECUTABLES = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.out, $(SRC_FILES))

# Builds all the executable
all: $(EXECUTABLES)
	@echo "******* Built all executables in /build ********\n"

# Build an executable for each .cpp file
$(BUILD_DIR)/%.out: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CFLAGS) $< -o $@

# Clean rule
clean:
	rm -rf $(BUILD_DIR)

# Run each time make is executed
.PHONY: clean