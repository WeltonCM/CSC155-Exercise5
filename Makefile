CXX = g++

CXXFLAGS = -std=c++11 -Wall

SOURCES = Exercise5_Welton.cpp Point.cpp

OBJECTS = $(SOURCES:.CPP=.O)

EXECUTABLE = Exercise5_Welton

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)