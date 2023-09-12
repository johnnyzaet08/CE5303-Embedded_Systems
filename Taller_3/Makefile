.PHONY: all clean

all:
	@echo "Compilando la aplicación..."
	@cd src && $(MAKE)
	@echo "Compilando la biblioteca..."
	@cd lib && $(MAKE)

clean:
	@echo "Limpiando archivos generados..."
	@cd src && $(MAKE) clean
	@cd lib && $(MAKE) clean
	@rm -f bin/calculadora_e bin/calculadora_d

