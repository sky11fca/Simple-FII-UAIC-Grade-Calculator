all:
	mkdir bin
	g++ calculator.cpp -o bin/calculator

clear:
	rm -rf bin/
