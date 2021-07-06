MAIN=main
MENU=menu
CALCULATOR=calculator
DISPLAY=display

all:
	@echo "compilando"
	c++ -c $(MENU).cpp -o $(MENU).o 
	c++ -c $(CALCULATOR).cpp -o $(CALCULATOR).o 
	c++ -c $(DISPLAY).cpp -o $(DISPLAY).o 
	c++ $(MAIN).cpp $(MENU).o $(CALCULATOR).o $(DISPLAY).o -o $(MAIN)
	./$(MAIN)
	rm $(MAIN)
	rm *.o