CC=gcc
CFLAGS=-Wall -g
RM=rm -rf

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

qcc: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(OBJS): qcc.h

test:
	$(MAKE) -C tests

clean:
	$(RM) qcc $(OBJS)
	$(MAKE) -S -C tests $@

.PHONY: test clean
