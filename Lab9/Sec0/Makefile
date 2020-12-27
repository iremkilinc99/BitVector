CC = gcc

lab9: main.o bitvector.o
	$(CC) main.o bitvector.o -o lab9

main.o: main.c bitvector.h
	$(CC) -c main.c

bitvector.o: bitvector.c bitvector.h
	$(CC) -c bitvector.c

clean:
	rm -f *.o lab9

