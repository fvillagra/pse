all:
	# Compilar cada archivo fuente
	g++ -c -o new.o new.cpp
	g++ -c -o circbuf.o circbuf.cpp -I .
	g++ -c -o scc.o scc.cpp -I .
	g++ -c -o serial.o serial.cpp -I .
	g++ -c -o maintest.o maintest.cpp -I .
	# Vincular
	g++ new.o circbuf.o scc.o serial.o maintest.o -o maintest.elf

clean:
	rm *.o *.elf
