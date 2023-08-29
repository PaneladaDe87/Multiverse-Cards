EXECUTABLE = MultiverseCards

CC = g++
CFLAGS = -std=c++ -Wall -Wextra

SFML_DIR = ./SFML
SFML_LIB = -lsfml-graphics -lsfml-window -lsfml-system

SOURCE = source/main.cpp

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
    $(CC) $(CFLAGS) -I$(SFML_DIR)/include $(SOURCE) -o $(EXECUTABLE) -L(SFML_DIR)/lib $(SFML_LIB)
    
clean:
    rm -f $(EXECUTABLE)