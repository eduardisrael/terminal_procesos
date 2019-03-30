all: bin/terminal

bin/terminal: obj/terminal.o
	gcc -Wall -o $@ $^

obj/terminal.o: src/prueba.c 
	gcc -Wall -c $^ -o $@
clean:
	rm -rf obj/*.o bin/*





