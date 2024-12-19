CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Directories
SRC_DIR = chapter1
OBJ_DIR = obj

# Files
MAIN_SRC = main.cpp
CHAPTER1_SRC = $(SRC_DIR)/chapter1.cpp
CHAPTER1_TEST_SRC = $(SRC_DIR)/chapter1_test.cpp
OBJ_FILES = $(OBJ_DIR)/main.o $(OBJ_DIR)/chapter1.o $(OBJ_DIR)/chapter1_test.o

# Output executable
EXEC = my_program

# Create object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Build executable
$(EXEC): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ_FILES)

# Compile main.cpp
$(OBJ_DIR)/main.o: $(MAIN_SRC)
	$(CXX) $(CXXFLAGS) -c $(MAIN_SRC) -o $(OBJ_DIR)/main.o

# Compile chapter1.cpp
$(OBJ_DIR)/chapter1.o: $(CHAPTER1_SRC)
	$(CXX) $(CXXFLAGS) -c $(CHAPTER1_SRC) -o $(OBJ_DIR)/chapter1.o

# Compile chapter1_test.cpp
$(OBJ_DIR)/chapter1_test.o: $(CHAPTER1_TEST_SRC)
	$(CXX) $(CXXFLAGS) -c $(CHAPTER1_TEST_SRC) -o $(OBJ_DIR)/chapter1_test.o

# Clean up object files and the executable
clean:
	rm -rf $(OBJ_DIR) $(EXEC)

# Run the program after building
run: $(EXEC)
	./$(EXEC)
