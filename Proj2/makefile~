CC = gcc
CFLAGS = -Wall -D_REENTRANT
LIBS = -lpthread 
OBJECTS_GER_DEP = src/generator.c  src/defines.h
OBJECTS_PAR_DEP = src/park.c  src/defines.h
OBJECTS_GER = src/gerador.c  
OBJECTS_PAR = src/park.c

all: bin/generator bin/park

bin/generator:   $(OBJECTS_GER_DEP)
		 $(CC) $(CFLAGS) $(OBJECTS_GER) -o bin/generator $(LIBS)

bin/park:	$(OBJECTS_PAR_DEP)
		$(CC) $(CFLAGS) $(OBJECTS_PAR) -o bin/park $(LIBS)
