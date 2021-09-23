import colorama
import math
from colorama import Fore, Back, Style
import pyfiglet
import time
import os
# Würfelberechnung

def menu():
    # Logo - Mit pyfiglet - pip install pyfiglet
    logo = pyfiglet.figlet_format("Chrisi", font = "slant")
    print(Fore.CYAN + logo + Fore.WHITE)

    print("1. Berechnungen")
    print("2. Exit")
    auswahl = input("Deine Wahl: ")

    if auswahl == "1":
        main()
    
    elif auswahl == "2":
        exit()
    else:
        print(Fore.RED + "Du musst dich zwischen den Zwei zahlen entscheiden!" + Fore.WHITE)
        time.sleep(3)
        os.system("cls")
        menu()

def main():
    # Input
    zahl1 = int(input(Fore.RED + "Länge hier eingeben : " + Fore.WHITE))

    if zahl1 <= 0:
        print("Die Zahl darf nicht ins minus gehen")
        main()

    else:
        # Code - pip install math - falls nicht vorhanden
        Volumen = (zahl1 ** 3)
        Oberflache = (6 * zahl1 ** 2)
        Diagonale = (math.sqrt(zahl1 ** 2 + zahl1 ** 2))
        Diagonaleraum = (math.sqrt(Diagonale ** 2 + zahl1 ** 2))


    # Print - Die Ergebnisse werden ausgegeben
    print(Fore.YELLOW + "Volumen : " + Fore.WHITE + str(Volumen))
    print(Fore.YELLOW + "Oberfläche : " + Fore.WHITE + str(Oberflache))
    print(Fore.YELLOW + "Diagonale : " + Fore.WHITE + str(Diagonale))
    print(Fore.YELLOW + "Diagonale (Raum) : " + Fore.WHITE +  str(Diagonaleraum))  


menu()