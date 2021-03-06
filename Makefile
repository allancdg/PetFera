BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/main.o $(BIN)/petfera.o $(BIN)/pessoa.o $(BIN)/tratador.o $(BIN)/veterinario.o $(BIN)/animal.o $(BIN)/reptil.o $(BIN)/mamifero.o $(BIN)/ave.o $(BIN)/anfibio.o $(BIN)/nativo.o $(BIN)/exotico.o $(BIN)/reptilnativo.o $(BIN)/reptilexotico.o $(BIN)/mamiferonativo.o $(BIN)/mamiferoexotico.o $(BIN)/avenativo.o $(BIN)/aveexotico.o $(BIN)/anfibionativo.o $(BIN)/anfibioexotico.o

all : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/petfera.o : $(SRC)/petfera.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/petfera.cpp -o $@
$(BIN)/pessoa.o : $(SRC)/pessoa.cpp $(INC)/pessoa.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/pessoa.cpp -o $@
$(BIN)/tratador.o : $(SRC)/tratador.cpp $(INC)/tratador.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $@
$(BIN)/veterinario.o : $(SRC)/veterinario.cpp $(INC)/veterinario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $@
$(BIN)/animal.o : $(SRC)/animal.cpp $(INC)/animal.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $@
$(BIN)/nativo.o : $(SRC)/nativo.cpp $(INC)/nativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/nativo.cpp -o $@
$(BIN)/exotico.o : $(SRC)/exotico.cpp $(INC)/exotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/exotico.cpp -o $@
$(BIN)/reptil.o : $(SRC)/reptil.cpp $(INC)/reptil.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp -o $@
$(BIN)/mamifero.o : $(SRC)/mamifero.cpp $(INC)/mamifero.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $@
$(BIN)/ave.o : $(SRC)/ave.cpp $(INC)/ave.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $@
$(BIN)/anfibio.o : $(SRC)/anfibio.cpp $(INC)/anfibio.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $@
$(BIN)/reptilnativo.o : $(SRC)/reptilnativo.cpp $(INC)/reptilnativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilnativo.cpp -o $@
$(BIN)/reptilexotico.o : $(SRC)/reptilexotico.cpp $(INC)/reptilexotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilexotico.cpp -o $@
$(BIN)/mamiferonativo.o : $(SRC)/mamiferonativo.cpp $(INC)/mamiferonativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferonativo.cpp -o $@
$(BIN)/mamiferoexotico.o : $(SRC)/mamiferoexotico.cpp $(INC)/mamiferoexotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoexotico.cpp -o $@
$(BIN)/avenativo.o : $(SRC)/avenativo.cpp $(INC)/avenativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/avenativo.cpp -o $@
$(BIN)/aveexotico.o : $(SRC)/aveexotico.cpp $(INC)/aveexotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/aveexotico.cpp -o $@
$(BIN)/anfibionativo.o : $(SRC)/anfibionativo.cpp $(INC)/anfibionativo.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibionativo.cpp -o $@
$(BIN)/anfibioexotico.o : $(SRC)/anfibioexotico.cpp $(INC)/anfibioexotico.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibioexotico.cpp -o $@
clean:
	rm -f core $(PROG) $(OBJS)
