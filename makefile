all: main.o 
	g++ main.o chess.o $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: main.c
	g++ -c main.c
$(HW).o: $(HW).c
	g++ -c $(HW).c
