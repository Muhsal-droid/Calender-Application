all:daysCalculatorA daysCalculatorB daysCalculatorC daysCalculatorE														  		
	gcc -ansi  -Wall -c daysCalculatorA.c
	gcc -ansi  -Wall -c daysCalculatorB.c
	gcc -ansi  -Wall -c daysCalculatorC.c
	gcc -ansi  -Wall -c daysCalculatorE.c
	gcc -ansi -o daysCalculatorA daysCalculatorA.c
	gcc -ansi -o daysCalculatorB daysCalculatorB.c
	gcc -ansi -o daysCalculatorC daysCalculatorC.c
	gcc -ansi -o daysCalculatorE daysCalculatorE.c


daysCalculatorA:daysCalculatorA.c
	gcc -ansi -Wall -c daysCalculatorA.c
	gcc -ansi -o daysCalculatorA daysCalculatorA.c


daysCalculatorB:daysCalculatorB.c
	gcc -ansi -Wall -c daysCalculatorB.c
	gcc -ansi -o daysCalculatorB daysCalculatorB.c


daysCalculatorC:daysCalculatorC.c
	gcc -ansi -Wall -c daysCalculatorC.c
	gcc -ansi -o daysCalculatorC daysCalculatorC.c


daysCalculatorD:daysCalculatorE.c
	gcc -ansi -Wall -c daysCalculatorE.c
	gcc -ansi -o daysCalculatorE daysCalculatorE.c



clean :daysCalculatorA.c daysCalculatorB.c daysCalculatorC.c daysCalculatorE.c
	rm daysCalculatorA.o
	rm daysCalculatorB.o
	rm daysCalculatorC.o
	rm daysCalculatorE.o
	rm daysCalculatorA
	rm daysCalculatorB
	rm daysCalculatorC
	rm daysCalculatorE






