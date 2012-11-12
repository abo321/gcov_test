CC = gcc
CXXFLAGS += -g -Wall -Wextra

TARGET = gcov gcov-dump

CLEANUP = rm -f $(TARGET) *.o

all : $(TARGET)

clean :
	$(CLEANUP)

LIBIBERTY = /usr/lib/libiberty.a

gcov-dump.o: gcov-dump.c
	$(CC) $(CXXFLAGS) -c $^
gcov.o: gcov.c
	$(CC) $(CXXFLAGS) -c $^
intl.o: intl.c
	$(CC) $(CXXFLAGS) -c $^
version.o: version.c
	$(CC) $(CXXFLAGS) -c $^
errors.o : errors.c
	$(CC) $(CXXFLAGS) -c $^

all:
gcov: version.o errors.o intl.o gcov.o
	$(CC) $(CXXFLAGS) $^ $(LIBIBERTY) -o $@
gcov-dump: version.o errors.o gcov-dump.o
	$(CC) $(CXXFLAGS) $^ $(LIBIBERTY) -o $@
