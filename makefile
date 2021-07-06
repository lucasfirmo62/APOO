MAIN=main
INSERT=insert
CALCULATOR=calculator
DISPLAY=display

all:
	@echo "compilando"
	c++ -c $(INSERT).cpp -o $(INSERT).o 
	c++ -c $(CALCULATOR).cpp -o $(CALCULATOR).o 
	c++ -c $(DISPLAY).cpp -o $(DISPLAY).o 
	c++ $(MAIN).cpp $(INSERT).o $(CALCULATOR).o $(DISPLAY).o -o $(MAIN)
	./$(MAIN)
	rm $(MAIN)
	rm *.o