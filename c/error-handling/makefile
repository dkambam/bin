CC = gcc
CFLAGS = -std=c99 -Wall

SRC = main.c
OBJ = $(SRC:.c=.o)

TARGET = prog.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(TARGET) $(OBJ)

run: clean all
	./$(TARGET)