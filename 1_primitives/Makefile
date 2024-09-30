all: 

primitives_info: primitives_info_build
	./primitives_info

primitives_info_build: primitives_info.c
	@echo "Building primitives_info.c"
	gcc primitives_info.c -o primitives_info

test/test_hello_world: test/test_hello_world.c test/unity/unity.c
	@echo "Building tests."
	gcc test/test_hello_world.c test/unity/unity.c -o test/test_hello_world

clean:
	@if test -f primitives_info; then rm primitives_info; fi

run: hello_world
	./hello_world

test: all
	./test/test_hello_world