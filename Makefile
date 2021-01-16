CC = gcc
CFLAGS = -Wall
BIN = disktroy

SRC = src/main.c \
	  src/disktroy.c 

OBJS = src/main.o \
	   src/disktroy.o 

UI = ui/disktroy.ui

PY = disktroy_ui.py

.PHONY: clean install gui ui
.SUFFIXES: .o .c

$(BIN): $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(BIN)
		pyuic5 -x $(UI) -o $(PY)

gui ui: $(BIN)
		pyuic5 -x $(UI) -o $(PY)

.c.o :
		$(CC) -Iinclude -c $< -o $@ $(CFLAGS)

install: $(BIN)
		 cp $(BIN) /usr/bin

clean:
		rm -f $(OBJS) $(BIN)
