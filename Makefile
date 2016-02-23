CXX=g++ 
CXXFLAGS=-g

OBJS = vector_t.o node_t.o sll_t.o  stack_t.o queue_t.o main.o

all: ${OBJS}
	$(CXX) $(CXXFLAGS) -o tad ${OBJS}

clean: 
	rm -rf *.o tad