# Target to compile the object file
qesolver.o: qesolver.o
	g++ qesolver.o -o qesolver.exe

# Target to compile the C++ program
qesolver.o: qesolver.cpp
	g++ -c qesolver.cpp -o qesolver.o

# Target to run the program (interactively)
run: qesolver
	./qesolver.exe

# Target to compile the object Test file
qesolverTest: qesolvertestcode.o
	g++ qesolvertestcode.o -o qesolvertestcode.exe

# Target to compile the C++ Test program
qesolvertestcode.o: qesolvertestcode.cpp
	g++ -c qesolvertestcode.cpp -o qesolvertestcode.o

# Target to run the Test program
test: qesolvertestcode
	./qesolvertestcode.exe

# Target to clean up compiled files
clean:
	rm -f qesolver.o qesolvertestcode.o qesolver.exe qesolvertestcode.exe
