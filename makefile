CC = gcc

AR = ar

CFLAGS = -Wall -g


MAIN = main.c


LIBB = basicClassification.c

LIBLOOP = advancedClassificationLoop.c

LIBREC = advancedClassificationRecursion.c

LIBLS = libclassloops.a

LIBRS = libclassrec.a

LIBLD = libclassloops.so

LIBRD = libclassrec.so

all: mains maindloop maindrec loops recursives recursived loopd

loops: $(LIBLS)

recursives: $(LIBRS)


recursived: $(LIBRD)

loopd: $(LIBLD)


mains: $(MAIN:.c=.o) $(LIBRS)

	$(CC) $(CFLAGS) $< ./$(LIBRS) -lm -o $@



maindloop: $(MAIN:.c=.o) $(LIBLD)

	$(CC) $(CFLAGS) $< ./$(LIBLD) -lm -o $@



maindrec: $(MAIN:.c=.o) $(LIBRD)

	$(CC) $(CFLAGS) $< ./$(LIBRD) -lm -o $@



$(MAIN:.c=.o): $(MAIN)

	$(CC) $(CFLAGS) -c $<



$(LIBRD): $(LIBREC:.c=.o) $(LIBB:.c=.o)

	$(CC) -shared $(CFLAGS) $^ -o $@



$(LIBLD): $(LIBLOOP:.c=.o) $(LIBB:.c=.o)

	$(CC) -shared $(CFLAGS) $^ -o $@



$(LIBLS): $(LIBLOOP:.c=.o) $(LIBB:.c=.o)

	$(AR) rcs $@ $^



$(LIBRS): $(LIBREC:.c=.o) $(LIBB:.c=.o)

	$(AR) rcs $@ $^



$(LIBLOOP:.c=.o): $(LIBLOOP) NumClass.h

	$(CC) $(CFLAGS) -c $< -fPIC



$(LIBREC:.c=.o): $(LIBREC) NumClass.h

	$(CC) $(CFLAGS) -c $< -fPIC



$(LIBB:.c=.o): $(LIBB) NumClass.h

	$(CC) $(CFLAGS) -c $< -fPIC

	

.PHONY: loops recursives recursived loopd mains maindloop maindrec all clean	

	
clean:

	rm -f *.o *.a *.so  mains maindloop maindrec

