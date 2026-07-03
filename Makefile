CC = gcc
CFLAGS = -std=c99 -g -Wall -Wextra
LDFLAGS = -lm

SOURCES = src/main.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = bin/corth

all: $(TARGET)

$(TARGET) : $(OBJECTS)
	@mkdir -p bin
	$(CC) $(CFLAGS) $(SOURCE) -o $@ $^ $(LDFLAGS)

.PHONY: clean all

clean:
	@rm -rf bin $(OBJECTS) core
