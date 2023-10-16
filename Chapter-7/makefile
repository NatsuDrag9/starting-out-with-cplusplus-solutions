CXX = g++
CFLAGS = -Wall -Wextra -g -I

# Directory path
APP_SRC_DIR = .
DEP_SRC_DIR = src/
DEP_INC_DIR = inc/
BUILD_DIR = build

# Application .cpp files
APP_SRC_FILES = $(wildcard $(APP_SRC_DIR)/*.cpp)

# List of executable corresponding to each application .cpp file
EXECUTABLES = $(patsubst $(APP_SRC_DIR)/%.cpp, $(BUILD_DIR)/%.out, $(APP_SRC_FILES))

# Adding all dependency .cpp files
DEP_SRC_FILES = $(wildcard $(DEP_SRC_DIR)/*.cpp)

# Object file for each application .cpp file
APP_OBJ_FILES = $(patsubst $(APP_SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(APP_SRC_FILES))

# Object file for each dependency .cpp file
DEP_OBJ_FILES = $(patsubst $(DEP_SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(DEP_SRC_FILES))

# Builds all the executable
all: $(EXECUTABLES)
	@echo "******* Built all executables in /build ********\n"

# Builds executables for each application
$(BUILD_DIR)/%.out: $(APP_SRC_DIR)/%.cpp $(APP_OBJ_FILES) $(DEP_OBJ_FILES)
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) $< $($APP_OBJ_FILES) $(DEP_OBJ_FILES) -o $@

# Builds object files for each application .cpp file
$(BUILD_DIR)/%.o: $(APP_SRC_DIR)/%.cpp
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) -c $< -o $@

# Builds object files for dependency .cpp file
$(BUILD_DIR)/%.o: $(DEP_SRC_DIR)/%.cpp
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) -c $< -o $@

# Creates build directory
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Clean rule
clean:
	rm -rf $(BUILD_DIR)

# Run each time make is executed
.PHONY: clean