import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure(figsize=(10,5))

data = np.loadtxt("0_1.dat")
plt.subplot(1,2,1)
plt.plot(data[:,0],data[:,1])
plt.title("x vs t")
plt.xlabel('t')
plt.ylabel('x')

plt.subplot(1,2,2)
plt.plot(data[:,0],data[:,2])
plt.title("v vs t")
plt.xlabel('t')
plt.ylabel('v')

plt.savefig("img.png")
