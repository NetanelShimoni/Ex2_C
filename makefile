CC=gcc
C_BANK=myBank.c
C_MAIN=main.c
FLAGS= -Wall -c

all: Ex2 libmyBank.a
lib: libmyBank.a
libmyBank.a: myBank.o main.o
	ar -rcs libmyBank.a main.o myBank.o
Ex2: myBank.o main.o
	$(CC) main.o myBank.o -o Ex2
main.o:$(C_MAIN) myBank.h
	$(CC) $(FLAGS) $(C_MAIN)
mYbank.o: $(C_BANK) myBank.h
	$(CC) $(FLAGS) $(C_BANK)
.PHONY: clean all libmyBank.a

clean:
	rm -f *.o *.a Ex2
