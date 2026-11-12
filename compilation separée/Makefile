CXX      = g++

OBJETS = main.o Point.o Segment.o

# Édition de liens : assemble les .o en exécutable

# structure :    cible:dépendances.      programmeEntier est la cible, les dépendances sont les OBJETS, ici main.o , Point.o et Segment.o



programmeEntier: $(OBJETS)
	$(CXX) $(OBJETS) -o $@ 
#commande de compilation, sans les variables ca se traduit par "g++ main.o Point.o Segment.o -o programmeEntier"
#le $@ est une variable automatique, $@ = la cible = programmeEntier, comme ca si je change le nom de la cible , j'ai pas besoin de réecrire le reste car ca n'a pas été codé en dur. 



# Chaque .o dépend de son .cpp et des .h qu'il inclut
main.o: main.cpp Point.h Segment.h
	$(CXX) -c main.cpp

Point.o: Point.cpp Point.h
	$(CXX) -c Point.cpp

Segment.o: Segment.cpp Segment.h Point.h
	$(CXX) -c Segment.cpp

clean:
	rm -f $(OBJETS) programmeEntier


