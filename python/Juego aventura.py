start=input("Ante ti se abren dos caminos, iras por la -derecha- o la -izquierda-?")
if start == "izquierda" :
    left1=input("Siguiendo el camino de la izquierda llegas a un claro con un gran endugeno al centro, elegiras -entrar- al endugeno o -no entrar-")
    if left1 == "entrar" :
        print("Intentas entrar al endugeno, pero te tropiezas y caes eternamente.FIN")
        input("Presiona enter para terminar")
    elif left1 == "no entrar" :
        print("Decides no entrar pero te ataca un puma y mueres.FIN")
        input("Presiona enter para terminar")
    else :
        print("Por no saber leer instrucciones, los dioses te destruyen con un rayo de luz divina")
        input("Presiona enter para terminar")
elif start == "derecha" :
    right1=input("Siguiendo el camino de la derecha llegas a la entrada de una cueva, es muy de noche, eliges -entrar- a la cueva o acampar -fuera-")
    if right1 == "entrar" :
        print("Mientras duermes el oso que vivia en la cueva vuelve y te come.FIN")
        input("Presiona enter para terminar")
    elif right1 == "fuera" :
        print("Prendes un fuego par acampar, pero se sale de control y causas un incendio forestar, los guardabosques te atrapan y te encierran de por vida.FIN")
        input("Presiona enter para terminar")
    else :
        print("Por no saber leer instrucciones, los dioses te destruyen con un rayo de luz divina")
        input("Presiona enter para terminar")
else :
    print("Por no saber leer instrucciones, los dioses te destruyen con un rayo de luz divina")
    input("Presiona enter para terminar")
