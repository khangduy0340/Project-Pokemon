# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: 
	 g++ -o game BattleSystem.cpp Pokemon.cpp Function.cpp PokemonMenu.cpp main.cpp
    

clean:
	rm game