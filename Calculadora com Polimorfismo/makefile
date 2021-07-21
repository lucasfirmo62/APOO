MAIN=main
CPU=LucasFirmoCPU
BUTTON=LucasFirmoButton
DISPLAY=LucasFirmoDisplay
KEYBOARD=LucasFirmoKeyboard
CALCULATOR=LucasFirmoCalculator
CT=CalculatorTest


all:
	g++ -g -c $(CPU).cpp
	g++ -g -c $(BUTTON).cpp
	g++ -g -c $(DISPLAY).cpp
	g++ -g -c $(KEYBOARD).cpp
	g++ -g -c $(CALCULATOR).cpp
	g++ -g -c $(CT).cpp
	g++ -g -c $(MAIN).cpp
	g++ -o $(MAIN) *.o
	./$(MAIN)
	rm $(MAIN).o
	rm *.o