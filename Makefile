CC = g++
all: ddhw08

ddhw08: ddhw08.o addrec.o delptr.o delrec.o menu.o savenexit.o showrec.o showrecs.o 
	$(CC) ddhw08.cpp addrec.o delptr.o delrec.o menu.o savenexit.o showrec.o showrecs.o -o ddhw08

ddhw08.o: ddhw08.cpp ddhw08.h
	$(CC) -c ddhw08.cpp -o ddhw08.o

addrec.o: addrec.cpp ddhw08.h
	$(CC) -c addrec.cpp -o addrec.o

delrec.o: delrec.cpp ddhw08.h
	$(CC) -c delrec.cpp -o delrec.o

showrec.o: showrec.cpp ddhw08.h
	$(CC) -c showrec.cpp -o showrec.o

showrecs.o: showrecs.cpp ddhw08.h
	$(CC) -c showrecs.cpp -o showrecs.o

menu.o: menu.cpp ddhw08.h
	$(CC) -c menu.cpp -o menu.o

savenexit.o: savenexit.cpp ddhw08.h
	$(CC) -c savenexit.cpp -o savenexit.o

delptr.o: delptr.cpp ddhw08.h
	$(CC) -c delptr.cpp -o delptr.o

clean:
	rm *.o 
tar: 
	tar cfv ddhw08.tar ddhw08.scr ddhw08.cpp addrec.cpp delptr.cpp delrec.cpp menu.cpp savenexit.cpp showrec.cpp showrecs.cpp Makefile
