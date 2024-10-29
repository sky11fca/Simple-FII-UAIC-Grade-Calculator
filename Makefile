all:
	mkdir bin
	g++ calculator.cpp source/* headers/* -o bin/calculator
update:
	
	g++ calculator.cpp source/* headers/* -o bin/calculator

clear:
	rm -rf bin/
