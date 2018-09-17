#
# Connor Baniak 
# cs 2750 pa3
# 3/18/2018
#
# Not a c file, requires bash comments
#
# UPPER CASE - provided by yousefi
#
# lower case: establish what header files are called to make .o files
#
# clean:
# 	Rules go here and MUST HAVE A TAB

CC = gcc
CFLAGS = -Wall -ansi
LIBS =
SRC = main.h avg.h sum.h min.h max.h
OBJ = main.o avg.o sum.o min.o max.o

stats: $(OBJ)
	$(CC) $(CFLAGS) -o stats $(OBJ) $(LIBS)

main.o: avg.h sum.h min.h max.h main.c

avg.o: avg.h

sum.o: sum.h

min.o: min.h

max.o: max.h

clean: 
	/bin/rm -f *.o $(TARGET)
	/bin/rm -f stats $(TARGET)
