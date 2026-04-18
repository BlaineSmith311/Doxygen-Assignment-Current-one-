CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

OBJS = main.o Employee.o Supervisor.o Officer.o

all: program

program: $(OBJS)
	$(CXX) $(CXXFLAGS) -o program $(OBJS)

main.o: main.cpp Employee.h Supervisor.h Officer.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Employee.o: Employee.cpp Employee.h
	$(CXX) $(CXXFLAGS) -c Employee.cpp

Supervisor.o: Supervisor.cpp Supervisor.h Employee.h
	$(CXX) $(CXXFLAGS) -c Supervisor.cpp

Officer.o: Officer.cpp Officer.h Employee.h
	$(CXX) $(CXXFLAGS) -c Officer.cpp

clean:
	rm -f *.o program