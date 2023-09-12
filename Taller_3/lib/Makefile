.PHONY: all clean

all: liboperaciones.a liboperaciones.so

liboperaciones.a: operaciones.c
	gcc -c operaciones.c -o operaciones.o
	ar rcs liboperaciones.a operaciones.o
	rm -f operaciones.o

liboperaciones.so: operaciones.c
	gcc -shared -fPIC operaciones.c -o liboperaciones.so

clean:
	rm -f liboperaciones.a liboperaciones.so

