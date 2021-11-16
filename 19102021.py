import turtle
import math
import colorama
import colorama
from colorama import Fore, Back, Style 

def menu():
    auswahl = int(input("Wähle hier eine Nummer von 1 - 17 aus: "))
    if auswahl == 1:
        a1()

    elif auswahl == 2:
        a2()

    elif auswahl == 3:
        a3()

    elif auswahl == 4:
        a4()

    elif auswahl == 5:
        a5()

    elif auswahl == 6:
        a6()
    
    elif auswahl == 7:
        a7()

    elif auswahl == 9:
        a9()
    
    elif auswahl == 10:
        a10()

    else:
        print("Wähle eine Gültige Zahl aus!!")
    
def a1():
    print(Fore.BLUE+ "Fläche und Umfang eines Kreises" +Fore.RESET)
    radius = int(input("Gebe hier den Radius ein: "))
    flaeche = ((math.pi) * (radius ** 2))
    umfang = (2 * (math.pi) * radius)
    print(flaeche)
    print("Der Umfang beträgt: " +Fore.RED+ str(umfang) +Fore.RESET)
    print("Die Fläche beträgt: " +Fore.RED+ str(flaeche) +Fore.RESET)
    input()
    menu()

def a2():
    print(Fore.BLUE+ "Radiant Berechnung" +Fore.RESET)
    Winkel = int(input("Gebe hier den Winkel ein: "))
    Winkel = Winkel * (math.pi) / 180
    print("Der Radiant beträgt: " +Fore.RED+ str(Winkel) +Fore.RESET)

def a3():
    print(Fore.BLUE+ "Größere Zahl erkennen" +Fore.RESET)
    zahl1 = int(input("Gebe hier Zahl 1 ein: "))
    zahl2 = int(input("Gebe hier Zahl 2 ein: "))
    if zahl1 < zahl2:
        print("Zahl zwei ist Größer ( " + Fore.RED + str(zahl2) + Fore.RESET + " )")
    else:
        print("Zahl eins ist Größer ( " + Fore.RED + str(zahl1) + Fore.RESET + " )")

def a4():
    print(Fore.BLUE+ "Quadranten Berechnung" +Fore.RESET)
    x = int(input("Gebe hier die x Koordinate ein: "))
    y = int(input("Gebe hier die y Koordinate eun: "))

    if x > 0 and y > 0:
        print("1 Quadrant")
    elif x < 0 and y > 0:
        print("2 Quandrant")
    elif x < 0 and y < 0:
        print("3 Quadrant")
    elif x > 0 or y < 0:
        print("4 Quadrant")

def a5():
    print(Fore.BLUE+ "Zahlen Steigen oder Fallen" +Fore.RESET)
    zahl1 = int(input("Gebe hier die 1 Zahl ein: "))
    zahl2 = int(input("Gebe hier die 2 Zahl ein: "))
    zahl3 = int(input("Gebe hier die 3 Zahl ein: "))

    if zahl1 > zahl2 and zahl2 > zahl3:
        print("Die Zahlen sinken")
    if zahl1 < zahl2 and zahl2 < zahl3:
        print("Die Zahlen steigen")
    else:
        print("Die Zahlen sind nicht Sortiert")

def a6():
    print(Fore.BLUE+ "ggT Ermitteln" +Fore.RESET)
    zahl1 = int(input("Gebe hier die Erste Zahl ein: "))
    zahl2 = int(input("Gebe hier die Zweite Zahl ein: "))

    while zahl2 != 0:
        if zahl1 > zahl2:
            zahl1 = zahl1 - zahl2

        else:
            zahl2 = zahl2 - zahl1

    print(str(zahl1))

def a7():
    print(Fore.BLUE+ "Summe aus n Ermitteln" +Fore.RESET)
    n = int(input("Zahl hier eingeben: "))
    r = range(n)
    summe = sum(r)
    print(summe)

def a8():
    print(Fore.BLUE+ "Fakultät berechnen" +Fore.RESET)
    zahl1 = int(input("Gebe hier die Zahl ein: "))
    if zahl1 == 0:
        print(zahl1)
    else:
        for i in range(1,zahl1):
            zahl1 = zahl1 * i
    print(zahl1)

def a9():
    print(Fore.BLUE+ "Zahl * 2" +Fore.RESET)
    zahl1 = int(input("Gebe hier die Zahl ein: "))
    for i in range(1,zahl1):
        zahl1 = zahl1 * 2
    print(zahl1)

def a10():
    print(Fore.BLUE+ "Primzahl" +Fore.RESET)
    zahl1 = int(input("Gebe hier die Zahl ein: "))
    if zahl1 > 1:
        for i in range(2, int(zahl1/2)+1):
             if (zahl1 % i) == 0:
                print("Keine Primzahl!")
                break
        else:
            print("Primzahl!")

    else:
        print("Keine Primzahl!")

def a11():
    pass
    

menu()