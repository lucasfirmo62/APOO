MAIN=main
ULA=LucasFirmo_ula
BUTTONS=LucasFirmo_buttons
DISPLAY=LucasFirmo_display

all:
	c++ -c $(ULA).cpp -o $(ULA).o 
	c++ -c $(DISPLAY).cpp -o $(DISPLAY).o 
	c++ -c $(BUTTONS).cpp -o $(BUTTONS).o
	c++ $(MAIN).cpp $(ULA).o $(DISPLAY).o $(BUTTONS).o -o $(MAIN)
	./$(MAIN)
	rm $(MAIN)
	rm *.o