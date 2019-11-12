img.png: 0_1.dat Euler.py
	python Euler.py	
0_1.dat: Ej.x
	./Ej.x > 0_1.dat

Ej.x : Euler.cpp
	c++ Euler.cpp -o Ej.x
clean :
	rm -r Ej.x img.png 0_1.dat