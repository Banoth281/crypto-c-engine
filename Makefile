CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -std=c11

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = bin/crypto_engine

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf src/*.o bin/

test: $(TARGET)
	./$(TARGET) test