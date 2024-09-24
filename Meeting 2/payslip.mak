# Target to compile the object file
payslip.o: payslip.o
	g++ payslip.o -o payslip.exe

# Target to compile the C++ program
payslip.o: payslip.cpp
	g++ -c payslip.cpp -o payslip.o

# Target to run the program (interactively)
run: payslip
	./payslip.exe

# Target to compile the object Test file
payslipTest: paysliptestcode.o
	g++ paysliptestcode.o -o paysliptestcode.exe

# Target to compile the C++ Test program
paysliptestcode.o: paysliptestcode.cpp
	g++ -c paysliptestcode.cpp -o paysliptestcode.o

# Target to run the Test program
test: paysliptestcode
	./paysliptestcode.exe

# Target to clean up compiled files
clean:
	rm -f payslip.o paysliptestcode.o payslip.exe paysliptestcode.exe
