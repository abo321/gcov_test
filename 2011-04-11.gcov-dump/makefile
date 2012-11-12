CC = gcc
CXXFLAGS += -g -Wall -Wextra

TARGET = gcov-dump

CLEANUP = rm -f $(TARGET) *.o

all : $(TARGET)

clean :
	$(CLEANUP)

LIBIBERTY = /usr/lib/libiberty.a

gcov-dump.o: gcov-dump.c
	$(CC) $(CXXFLAGS) -c $^
version.o: version.c
	$(CC) $(CXXFLAGS) -c $^
errors.o : errors.c
	$(CC) $(CXXFLAGS) -c $^

$(TARGET): version.o errors.o gcov-dump.o
	$(CC) $(CXXFLAGS) $^ $(LIBIBERTY) -o $@