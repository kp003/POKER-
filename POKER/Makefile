CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: poker

poker: main.o CARD.o DEALER.o GAME.o HAND.o PLAYER.o SPECTATOR.o 
	$(CXX) $(CXXFLAGS) main.o CARD.o DEALER.o GAME.o HAND.o PLAYER.o SPECTATOR.o  $(GTKFLAGS) -o poker
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS) -o main.o

CARD.o: CARD.cpp *.h
	$(CXX) $(CXXFLAGS) -c CARD.cpp $(GTKFLAGS) -o CARD.o
DEALER.o: DEALER.cpp *.h 
	$(CXX) $(CXXFLAGS) -c DEALER.cpp $(GTKFLAGS) -o DEALER.o
GAME.o: GAME.cpp *.h 
	$(CXX) $(CXXFLAGS) -c GAME.cpp $(GTKFLAGS) -o GAME.o
HAND.o: HAND.cpp *.h
	$(CXX) $(CXXFLAGS) -c HAND.cpp -o HAND.o
PLAYER.o: PLAYER.cpp *.h
	$(CXX) $(CXXFLAGS) -c PLAYER.cpp -o PLAYER.o
SPECTATOR.o: SPECTATOR.cpp *.h
	$(CXX) $(CXXFLAGS) -c SPECTATOR.cpp -o SPECTATOR.o


clean:
	rm -f *.o *.gch poker
