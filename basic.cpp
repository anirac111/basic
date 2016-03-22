# basic
//
//  main.cpp
//
//  "move" Befehl, Spiellogik alle Felder, "save" Befehl, quit, zügespeichern
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Command.cpp"
#include <cstring>
using namespace std;

int main(int argc, const char * argv[])
{
  bool running = true;
  while (running)
  {
    std::vector <std::string> order;
    std::cout << "sep> ";
    std::string * pointer;
    std::string input;
    std::cin >> input;
    pointer = std::strtok(input, " ");
    while (pointer != NULL)
    {
      int i = 0;
      order[i]= *pointer;
      pointer = std::strtok(NULL, " ");
      i++;
    }

    if (order[0] == "quit")
    {
      std::cout << "Bye!\n" << std::endl;
      running = false;
      return 0;
    }
    else if (order[0] == "move")
    {
      std::cout << "bewegung" << std::endl;
    }
    else if (order[0] == "show")
    {
      for (int i = 0; i < 2; i++)
      {
        std::cout << order[i] << std::endl;
      }
    }
    else
    {
     std::cout << "[ERR] Unknown command.\n" << std::endl;
    }
  }
  
  return 0;
}







//move
/*
 if (move is insert)
 {
 void (vector; history, board)
 {
  switch(vector[1])
  {
    überprüfen ob möglich, schritte anpassen,
    wenn best. feld das machen was passieren soll
    case "up": feld[current_row-1][current_column] = "*";
    case "down": feld[current_row-1][current_column] = "*";
    case "left": feld[current_row][current_column-1] = "*";
    case "right": feld[current_row][current_column+1] = "*";
    default: std::cout << "[ERR] Invalid move.\n" << std::endl;
  }
 }
 
 
 }
 */
 
// current_row, current_column bestimmen
/*
 

 feld durchchecken nach * (dem spieler) bzw nach jedem zug merken?!?
 
*/


//felder
/*
# wall
o start
x finish
+ ice
A-Z teleport
< > ^ v oneway
a-e bonus 
f-j quicksand f=1, g=2, h=3, i=4, j=5 abzug von verbl. schritten


 
*/

//save

