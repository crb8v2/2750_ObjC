#
# Connor Baniak
# cs2750 pa4
# 4/1/18
#
# UPPER CASE - provided by yousefi
# lower case - establish which header files need to be called for .o files
#
# clean:
# 	rules go here and must have a tab
#

CC = gcc
CFLAGS = -Wall -ansi
LIBS =
SRC = main.h func.h
OBJ = main.o func.o

deater: $(OBJ)
	$(CC) $(CLFAGS) -o deater $(OBJ) $(LIBS)

main.o: func.h main.c

func.o: func.h

clean:
	/bin/rm -f *.o $(TARGET)
	/bin/rm -f deater $(TARGET)
