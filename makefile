2daderivada.png: datos_2da.txt  grafica_2da.py
	python grafica_2da.py
datos.txt: 2derivada.cpp
	c++ 2derivada.cpp
	./a.out > datos_2da.txt
	rm a.out  
