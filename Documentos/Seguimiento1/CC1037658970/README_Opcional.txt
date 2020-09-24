Para realizar la gráfica se instaló la librería de matplotlib para C++, la cual se obtuvo del siguiente repositorio:

https://github.com/Cryoris/matplotlib-cpp

Luego de clonado el repositorio es necesario tener el programa que se va a correr en la misma dirección de memoria en la cuál se encuentra la carpeta que contiene "matplotlibcpp.h", es decir:

Files--|
	   |--Seguimiento1Opcional_RoquemenValentina.cpp
	   |--matplotlib-cpp--|
	  					  |--matplotlibcpp.h

Para compilar el programa se debe de ejecutar el sguiente comando:

$ g++ Seguimiento1Opcional_RoquemenValentina.cpp -std=c++11 -I/usr/include/python2.7 -lpython2.7
