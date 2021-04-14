PROJ_NAME = financialcalculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/source.c 

COV_SRC = test.c

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

ifdef OS
   RM = rm 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))

test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c

debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC) -lm
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
