CC = g++
CFLAGS = -I./include

IDIR = include
ODIR = obj

_DEPS = calc.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = calc.o calcfunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

calc: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core $(INCDIR)/*~