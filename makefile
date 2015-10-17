OBJS = main.o point.o forme.o rectrangle.o fleche.o f_horizon.o f_verticale.o drawing.o
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
DEBUG = -g
CC = g++

OBJECT:$(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o OBJECT
main.o:main.cpp forme.hpp rectrangle.hpp f_horizon.hpp f_verticale.hpp point.hpp drawing.hpp
	$(CC) $(CFLAGS) main.cpp -o main.o
point.o:point.hpp point.cpp
	$(CC) $(CFLAGS) point.cpp -o point.o
forme.o:forme.hpp forme.cpp point.hpp
	$(CC) $(CFLAGS) forme.cpp -o forme.o
rectrangle.o:rectrangle.hpp rectrangle.cpp forme.hpp point.hpp
	$(CC) $(CFLAGS) rectrangle.cpp -o rectrangle.o
fleche.o:fleche.hpp fleche.cpp forme.hpp forme.cpp
	$(CC) $(CFLAGS) fleche.cpp -o fleche.o
f_horizon.o:f_horizon.hpp f_horizon.cpp fleche.hpp point.hpp
	$(CC) $(CFLAGS) f_horizon.cpp -o f_horizon.o
f_verticale.o:f_verticale.hpp f_verticale.cpp fleche.hpp point.hpp
	$(CC) $(CFLAGS) f_verticale.cpp -o f_verticale.o
drawing.o:drawing.hpp drawing.cpp f_verticale.hpp f_verticale.cpp rectrangle.hpp
	$(CC) $(CFLAGS) drawing.cpp -o drawing.o
clean:
	\rm *.o *~ OBJECT