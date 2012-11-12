CC = gcc
CXXFLAGS += -g -Wall -Wextra

TARGET = gcov

CLEANUP = rm -f $(TARGET) *.o

all : $(TARGET)

clean :
	$(CLEANUP)

LIBIBERTY = /usr/lib/libiberty.a

gcov.o: gcov.c
	$(CC) $(CXXFLAGS) -c $^
intl.o: intl.c
	$(CC) $(CXXFLAGS) -c $^
version.o: version.c
	$(CC) $(CXXFLAGS) -c $^
errors.o : errors.c
	$(CC) $(CXXFLAGS) -c $^

$(TARGET): version.o errors.o intl.o gcov.o
	$(CC) $(CXXFLAGS) $^ $(LIBIBERTY) -o $@
