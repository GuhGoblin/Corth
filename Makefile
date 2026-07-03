CC = gcc
CFLAGS = -std=c99 -g -Wall -Wextra

LDFLAGS = -lm

SOURCES = src/main.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = bin/corth

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(SOURCE) -o $@ $^ $(LDFLAGS)

.PHONY: clean

clean:
	@rm -f $(TARGET) $(OBJECTS) core
