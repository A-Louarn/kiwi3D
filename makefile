CC = g++
LIBS = -lsfml-window -lsfml-system
FLAGS = -std=c++14 -Wall -pedantic
INCLUDES = -I./
PROJECT_NAME = kiwi3D.out

system_obj = KiWindow.o KiWindowGL.o KiParameters.o KiEventDispacher.o
scene_obj = Vector3D.o
objects = main.o $(system_obj) $(scene_obj)

all: $(objects)
	$(CC) -o $(PROJECT_NAME) $^ $(LIBS)

%.o: */%.cpp */%.h
	$(CC) -c $< $(FLAGS) $(INCLUDES)

main.o: main.cpp
	$(CC) -c main.cpp $(FLAGS) $(INCLUDES)

.PHONY: clean
	
clean:
	-rm -f *.o
	-rm -f */*.gch
