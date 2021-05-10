# Name of the project
PROJ_NAME = KBC

# Output directory
BUILD_DIR = Build

# All source code files
SRC = Main.c

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Run the target even if the matching name exists
.PHONY : all test coverage run clean doc

# Project Output name
all:$(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# Call `make run` to run the application
run: all
	./$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)*.$(EXEC))
	make clean ./documentation
	rmdir $(BUILD_DIR) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD_DIR):
	mkdir $(BUILD_DIR)



