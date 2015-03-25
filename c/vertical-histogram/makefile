CC = gcc
CFLAGS = -std=c99 -Wall


SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = hist.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET)
