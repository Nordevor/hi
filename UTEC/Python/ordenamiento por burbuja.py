def bubblesSort(lista):
    for num in range(len(lista)-1,0,-1):
        for j in range(num):
            if lista[j]>lista[j+1]:
                aux=lista[j]
                lista[j]=lista[j+1]
                lista[j+1]=aux
    return lista
lista=[2,1,9,5,7,4,6,3,8,52,14,21,20,10,63,29,56,23,45,24,25,46,45,8,69]
print(bubblesSort(lista))
