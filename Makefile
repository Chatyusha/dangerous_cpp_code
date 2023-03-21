CC =  
CFLAGS = 

TARGET = main

SRCS = nekolib.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET):$(OBJS)
	$(CC) $(@:=.cpp) $(^) -o $(@)

$(OBJS):$(SRCS)
	$(CC) -c $(SRCS)

clean:
	-rm -f $(OBJS) $(TARGET)
