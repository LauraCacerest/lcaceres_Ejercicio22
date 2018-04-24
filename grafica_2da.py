import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('datos_2da.txt')
x_inicial=datos[:,2]
u=datos[:,1]
x=datos[:,0]

plt.figure()
plt.plot(x,u)
plt.plot(x,x_inicial)
plt.legend()
plt.xlabel("x")
plt.ylabel("u")
plt.title('Adveccion Lineal')
plt.savefig('2daderivada.png')

