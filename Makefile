all: compile link

compile:
	g++ -Isrc/include -c mainSFML.cpp

link:
	g++ mainSFML.o -o mainSFML.exe -Lsrc/lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-network -lsfml-system