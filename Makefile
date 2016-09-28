// Makefile
compilar:
	g++ -o main.c++ main.cpp Fraccion.cpp Matriz.cpp Polinomios.cpp

borrar:
	rm main.c++

ejecutar: compilar
	./main.c++
