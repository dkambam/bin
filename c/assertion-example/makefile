CC = gcc
CFLAGS = -Wall -std=c99

SRC = assertion.c
OBJ = $(SRC:.c=.o)

TARGET = assert.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(TARGET) $(OBJ)

run: clean $(TARGET)
	./$(TARGET)