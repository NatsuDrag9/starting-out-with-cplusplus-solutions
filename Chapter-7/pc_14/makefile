# CXX = g++
# CFLAGS = -Wall -Wextra -g -I inc

# # Directory path
# APP_SRC_DIR = .
# DEP_DIR = dep
# BUILD_DIR = build

# # Application source file
# APP_SRC_FILES = $(wildcard $(APP_SRC_DIR)/*.cpp)

# # Application object file
# APP_OBJ_FILES = $(patsubst $(APP_SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(APP_SRC_FILES))

# # Dependency source file
# DEP_SRC_FILES = $(wildcard $(DEP_DIR)/*.cpp)

# # Dependency object file
# DEP_OBJ_FILES = $(patsubst $(DEP_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(DEP_SRC_FILES))

# # Target
# EXECUTABLE = $(patsubst $(SRC_FILES)/%.cpp, $(BUILD_DIR)/%.out, $(SRC_FILES))

# all: $(EXECUTABLE)
# 	@echo "****************** Built pc_14.out in build/ ****************\n"

# # Building executable
# $(BUILD_DIR)/%.out: $(APP_OBJ_FILES) $(DEP_OBJ_FILES)
# 	@mkdir -p $(dir $@)
# 	$(CXX) $(CFLAGS) $^ -o $@

# # Building application object files
# $(BUILD_DIR)/%.o: $(APP_SRC_DIR)/%.cpp
# 	@mkdir -p $(dir $@)
# 	$(CXX) $(CFLAGS) -c $< -o $@

# # Building dependency object files
# $(BUILD_DIR)/%.o: $(DEP_DIR)/*.cpp
# 	@mkdir -p (dir $@)
# 	$(CXX) $(CFLAGS) -c $< -o $@

# # Clean rule
# clean:
# 	rm -rf $(BUILD_DIR)

# # Run each time make is executed
# .PHONY: clean

CXX = g++
CFLAGS = -Wall -Wextra -g -I

# Directory path
APP_SRC_DIR = .
DEP_SRC_DIR = dep
DEP_INC_DIR = inc
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
$(BUILD_DIR)/%.out: $(APP_OBJ_FILES) $(DEP_OBJ_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) $^ -o $@

# Builds object files for each application .cpp file
$(BUILD_DIR)/%.o: $(APP_SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) -c $< -o $@

# Builds object files for dependency .cpp file
$(BUILD_DIR)/%.o: $(DEP_SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CFLAGS) $(DEP_INC_DIR) -c $< -o $@

# Creates build directory
# $(BUILD_DIR):
# 	@mkdir -p $(BUILD_DIR)

# Clean rule
clean:
	rm -rf $(BUILD_DIR)

# Run each time make is executed
.PHONY: clean
