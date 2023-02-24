CC = gcc
CFLAGS = -Wall -g
files = main.c merge_sort.c

algos_suite: ${files}
	mkdir -p build
	${CC} ${CFLAGS} ${files} -o build/main

clean:
	rm -f main

