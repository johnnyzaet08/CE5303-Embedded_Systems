.PHONY: all clean

all: calculadora_e calculadora_d

calculadora_e: calculadora.c
	gcc -o ../bin/calculadora_e calculadora.c -I../include -L../lib -loperaciones -Wl,-rpath,../lib

calculadora_d: calculadora.c
	gcc -o ../bin/calculadora_d calculadora.c -I../include -L../lib -loperaciones -Wl,-rpath,../lib -ldl

clean:
	rm -f ../bin/calculadora_e ../bin/calculadora_d

