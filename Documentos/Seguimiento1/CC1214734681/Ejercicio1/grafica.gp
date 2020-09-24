reset

set terminal png size 1000, 700
set output "gaussiana.png"

set title "Distribucion Gaussiana"
set xlabel"X"
set ylabel"Y"

plot "distribucion_gaussiana.dat"

reset