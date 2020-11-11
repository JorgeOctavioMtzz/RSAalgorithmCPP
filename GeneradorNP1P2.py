import random
n=int(input("Introduce un numero: "))
listaXD=[]
listaP=[]
f = open("/Users/octavio/Desktop/CPP/RSAalgorithm/Primos1y2.txt", "w")
for i in range(2,n+1):
    contador=0
    for j in range(1,n+1):
        if i%j==0:  
            contador+=1
    if contador==2:
        listaXD.append(i)
longitud=(len(listaXD))

import random
for x in range(2):
    listaP.append(listaXD[random.randint(longitud-20,longitud-1)])
  
for v in range(2):
    f.write(str(listaP[v]))
    f.write("\n")
