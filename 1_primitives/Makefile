all: test/primitives

primitives_info: primitives_info_build
	./primitives_info

primitives_info_build: primitives_info.c
	@echo "Building primitives_info.c"
	gcc primitives_info.c -o primitives_info

test/primitives: test/primitives.c test/unity/unity.c primitives.o
	@echo "Building tests."
	gcc primitives.o test/primitives.c test/unity/unity.c  -o test/primitives

primitives.o: primitives.c primitives.h
	@echo "Building primitives.c"
	gcc -c primitives.c -o primitives.o

clean:
	rm -f primitives_info
	rm -f test/primitives
	rm -f primitives.o

run: hello_world
	./hello_world

test: all
	./test/primitives