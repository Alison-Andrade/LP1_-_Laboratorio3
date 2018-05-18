CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./Includes
BIN = ./bin
OBJ = ./build
OBJS = $(OBJ)/Produto.o $(OBJ)/Roupa.o $(OBJ)/Fruta.o $(OBJ)/Bebida.o $(OBJ)/main.o

PROG = $(BIN)/produto

all: $(OBJS) dir
	$(CC) -o $(PROG) $(OBJS)

$(OBJ)/Produto.o : $(INC)/Produto.h $(SRC)/Produto.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/Produto.cpp -o $@

$(OBJ)/Roupa.o : $(INC)/Roupa.h $(SRC)/Roupa.cpp $(OBJ)/Produto.o
	$(CC) $(CPPFLAGS) -c $(SRC)/Roupa.cpp -o $@

$(OBJ)/Fruta.o : $(INC)/Fruta.h $(SRC)/Fruta.cpp $(OBJ)/Produto.o
	$(CC) $(CPPFLAGS) -c $(SRC)/Fruta.cpp -o $@

$(OBJ)/Bebida.o : $(INC)/Bebida.h $(SRC)/Bebida.cpp $(OBJ)/Produto.o
	$(CC) $(CPPFLAGS) -c $(SRC)/Bebida.cpp -o $@

$(OBJ)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
	
dir:
	mkdir $(BIN) $(OBJ)
	
clean:
	rm $(PROG) $(OBJS)

