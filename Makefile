OBJS = choose_4_me_BIG_MONEY.o
CC=g++
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

BigMoney : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o BigMoney

choose_4_me_BIG_MONEY.o : choose_4_me_BIG_MONEY.cpp
	$(CC) $(CFLAGS) choose_4_me_BIG_MONEY.cpp

clean:
	\rm *.o BigMoney
