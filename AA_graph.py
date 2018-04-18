import numpy as np
import matplotlib.pyplot as plt

#Se cargan los datos del archivo tray.txt
data=np.loadtxt("tray.txt")
x=data[:,0]
vel=data[:,1]
tiempo=data[:,2]

#Se grafica posicion vs. tiempo
plt.figure()
plt.plot(x, tiempo)
plt.xlabel("tiempo")
plt.ylabel("posicion")
plt.title("posicion vs. tiempo")
plt.savefig("pos.png")


#Se grafica velocidad vs. tiempo
plt.figure()
plt.plot(vel, tiempo)
plt.xlabel("tiempo")
plt.ylabel("velocidad")
plt.title("velocidad vs. tiempo")
plt.savefig("vel.png")


#Se grafica velocidad vs. posicion
plt.figure()
plt.plot(vel,x)
plt.xlabel("tiempo")
plt.ylabel("fase")
plt.title("fase vs. tiempo")
plt.savefig("phase.png")


