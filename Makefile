
all: library program
.PHONY: all

build:
	mkdir -p build/{library,program}

.PHONY: library
library: build
	cmake -Hlibrary -Bbuild/library/ -DCMAKE_BUILD_TYPE=Debug
	make -Cbuild/library

.PHONY: program
program: build
	cmake -Hprogram -Bbuild/program/  -DCMAKE_BUILD_TYPE=Debug
	make -Cbuild/program

.PHONY: clean
clean:
	rm -rf build/
