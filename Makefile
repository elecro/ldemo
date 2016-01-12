
all: library program
.PHONY: all

build:
	mkdir -p build/{library,program}

.PHONY: library
library: build
	cmake -Hlibrary -Bbuild/library/
	make -Cbuild/library

.PHONY: program
program: build
	cmake -Hprogram -Bbuild/program/
	make -Cbuild/program

