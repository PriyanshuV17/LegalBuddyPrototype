CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = LegalApp
OBJECTS = main.o User.o Case.o Document.o Client.o Lawyer.o Person.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

main.o: main.cpp
User.o: User.cpp User.h
Case.o: Case.cpp Case.h
Document.o: Document.cpp Document.h
Client.o: Client.cpp Client.h
Lawyer.o: Lawyer.cpp Lawyer.h
Person.o: Person.cpp Person.h

clean:
    rm -f $(TARGET) $(OBJECTS)
