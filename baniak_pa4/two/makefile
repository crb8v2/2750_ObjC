#
# Connor Baniak
# cs2750 pa4
# 4/1/18
#
# UPPER CASE - set parameters
#
# lower case - establist which header files need to be called for .o files
#
# clean:
# 	rules go here and must have a tab

CC = gcc
CFLAGS =  -Wall -ansi -g
LIBS =
SRC = phone.h phone_fmt.h
OBJ = phone.o phone_fmt.o

phone: $(OBJ)
	$(CC) $(CFLAGS) -o phone $(OBJ) $(LIBS)

phone.o: phone_fmt.h phone.c

phone_fmt.o: phone_fmt.h

clean:
	/bin/rm -f *.o $(TARGET)
	/bin/rm -f phone $(TARGET)
