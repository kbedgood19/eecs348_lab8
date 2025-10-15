CC=g++
CFLAGS=-c -Wall
#ALL= prog

main: main.o football_scoring.o temp_conv.o
	$(CC) main.o football_scoring.o  temp_conv.o -o main

main.o: main.c 
	$(CC) $(CFLAGS) main.c 

football_scoring.o: football_scoring.c 
	$(CC) $(CFLAGS) football_scoring.c 

temp_conv.o: temp_conv.c 
	$(CC) $(CFLAGS) temp_conv.c 

clean: 
	rm -rf *.o prog