all: hello_world test/test_hello_world

hello_world: hello_world.c
	@echo "Building hello_world."
	gcc hello_world.c -o hello_world

test/test_hello_world: test/test_hello_world.c test/unity/unity.c
	@echo "Building tests."
	gcc test/test_hello_world.c test/unity/unity.c -o test/test_hello_world

clean:
	@if test -f hello_world; then rm hello_world; fi
	@if test -f test/test_hello_world; then rm test/test_hello_world; fi

run: hello_world
	./hello_world

test: all
	./test/test_hello_world