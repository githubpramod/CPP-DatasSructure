CC=g++
CFLAGS= -s -Wall -O -DUNIX

all: linkedList
	
linkedList: LinkedList_1.o
	$(CC) $(CFLAGS) -o $@ $^

test: linkedList
	./linkedList

LinkedList_1.o: LinkedList_1.cpp

clean:
	$(RM) -f linkedList *.o

