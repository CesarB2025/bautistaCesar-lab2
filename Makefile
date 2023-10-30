
CC = gcc
CFLAGS = -Wall -g
TARGET = time
OBJS = ipc.o time.o main.o

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
.PHONY: