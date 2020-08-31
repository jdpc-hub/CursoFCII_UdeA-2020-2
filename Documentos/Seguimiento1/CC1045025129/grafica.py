import matplotlib.pyplot as plt
import numpy as np


x,y = np.loadtxt('Gaussiana.txt', unpack=True)

plt.plot(x,y)

plt.show()
