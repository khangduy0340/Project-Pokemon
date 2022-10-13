# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: 
	 g++ -o game Moves.cpp Pokemon.cpp firePokemon.cpp grassPokemon.cpp waterPokemon.cpp Pokemonlist.cpp BattleSystem.cpp Function.cpp PokemonMenu.cpp main.cpp
    
clean:
	rm game