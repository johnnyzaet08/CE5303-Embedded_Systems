# Nombre del ejecutable
OUTPUT = my_program

# Archivos fuente
SOURCES = main.c mongoose.c

# Archivos objeto
OBJECTS = $(SOURCES:.c=.o)

# Flags para el compilador
CFLAGS = -Wall

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(OUTPUT)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OUTPUT)

