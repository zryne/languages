CPP=g++

FILE1=circle
FILE2=sphere
FILE3=ball
MAIN=main
TARGET=demo

$(TARGET): $(FILE1).o $(FILE2).o $(FILE3).o $(MAIN).o
	$(CPP) $(FILE1).o $(FILE2).o $(FILE3).o $(MAIN).o -o $(TARGET)

$(FILE1): $(FILE1).cpp $(FILE1).h
	$(CPP) -c $(FILE1).cpp -o $(FILE1).o

$(FILE2): $(FILE2).cpp $(FILE2).h
	$(CPP) -c $(FILE2).cpp -o $(FILE2).o

$(FILE3): $(FILE3).cpp $(FILE3).h
	$(CPP) -c $(FILE3).cpp -o $(FILE3).o

$(MAIN): $(MAIN).cpp
	$(CPP) -c $(MAIN).cpp -o $(MAIN).o

run:
	./$(TARGET)

clean:
	rm -f $(FILE1).o $(FILE2).o $(FILE3).o $(MAIN).o $(TARGET)
