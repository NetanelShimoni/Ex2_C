CC=gcc
C_BANK=myBank.c
C_MAIN=main.c
FLAGS= -Wall -c

all: account
account: libmyBank.a
libmyBank.a: myBank.o main.o
	ar -rcs libmyBank.a main.o myBank.o
main.o:$(C_MAIN) myBank.h
	$(CC) $(FLAGS) -fPIC -c $(C_MAIN)
mYbank.o: $(C_BANK) myBank.h
	$(CC) $(FLAGS) -fPIC -c $(C_BANK)
.PHONY: clean all

clean:
	rm -f *.o *.a
