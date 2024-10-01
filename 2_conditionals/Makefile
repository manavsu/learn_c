all: test/conditionals

test/conditionals: test/conditionals.c test/unity/unity.c conditionals.o
	@echo "Building tests."
	gcc conditionals.o test/conditionals.c test/unity/unity.c -o test/conditionals

conditionals.o: conditionals.c conditionals.h
	@echo "Building conditionals.c"
	gcc -c conditionals.c -o conditionals.o

clean:
	rm -f test/conditionals
	rm -f conditionals.o

test: all
	./test/conditionals