import matplotlib.pyplot as plt
import numpy as np


x,y = np.loadtxt('dat.txt', unpack=True)

plt.figure(figsize=(8,6))
plt.plot(x,y,label=r'$y(x)=\frac{1}{\sigma \sqrt{2\pi}}{e}^{\frac{-1}{2}{[\frac{x-\mu}{\sigma}]}^{2}}$')
plt.grid()
plt.legend()
plt.savefig('Grafica.png')
plt.show()
