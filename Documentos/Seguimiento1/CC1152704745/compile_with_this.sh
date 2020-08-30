echo "Compilando programa para calcular valores individuales de la FDP Normal, dada la media y la desviación estándar"
g++ gaussbell.cpp -o gaussbell_plot.out
echo "listo"

echo "Compilando programa para graficar la FDP Normal a una desv, estándar, dada la media y la desviación estándar"
g++ gaussbell_plot.cpp -o gaussbell_plot.out -std=c++11 -I/usr/include/python3.8 -lpython3.8
echo "listo"
