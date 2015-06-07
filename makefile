all:
	cc src/str.c -c -o src/str.o -I./include -Wall -Werror -pedantic -std=c11 -g -O3 -lc
	ar rvs libstr.a src/*.o
clean:
	rm libstr.a src/*.o
install:
	cp include/*.h /usr/include
	cp libstr.a /usr/lib/

gcw0:
	mipsel-gcw0-linux-uclibc-cc src/str.c -c -o src/str.o -I./include -Wall -Werror -pedantic -std=c11 -g -O3 -lc -I./include
	mipsel-gcw0-linux-uclibc-ar rvs libstr.a src/*.o
install_gcw0:
	cp include/*.h /opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/include
	cp libstr.a /opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/lib
