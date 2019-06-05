#
CFLAGS      = -c -g
#
LOAD        = ./cdTest1

#
SRCS        = \
./cdTest1.c

#
OBJS        = \
./cdTest1.o

#
all:    $(LOAD)
#

depend: @makedepend -- $(CFLAGS) -- $(SRCS)
#

$(LOAD):    $(OBJS)
		cc -o $(LOAD) $(OBJS)


