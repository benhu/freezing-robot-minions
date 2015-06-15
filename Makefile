#It is the future mkefile

CXX=g++
CFLAGS=-Wall -Wextra -pedantic -Wno-long-long
EXEC=Main
SRC=$(wildcard app/*.cpp)
OBJ=$(SRC:.cpp=.o)

all:$(EXEC)
	#$@ Le fichier cible (par exemple :obj/main.o)
	#$* Le fichier cible sans suffixe (ex :obj/main)
	#$< Le premier fichier de la liste des dependances (par exemple :main.c)
	#$? L’ensemble des fichiers de dependance

Main:$(OBJ)
	$(CXX) -std=c++0x -o minions $^

%.o: %.cpp
	@$(CXX) -std=c++0x -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(EXEC)
