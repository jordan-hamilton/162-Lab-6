/***********************************************************************************************
** Program name: Lab 5
** Author: Jordan Hamilton
** Date: 11/5/2018
** Description: This program displays a menu to the user with options to print a string in
** reverse, to calculate sum of numbers, or to calculate a triangular number. If the user
** selects to print a string in reverse, the user is prompted to enter a string, which is passed
** to the reverseString function to display the string the user enters in reverse. If the user
** selects to sum integers, the user is asked how many integers they would like to sum, then
** is prompted to enter the appropriate number of integers that are then stored in an array in
** a menu object. Menu functions then pass a pointer to the array and an integer representing
** the number of elements in that array to the calcSum function, which returns the total of the
** integers in the array. If the user selects to calculate a triangular number, the user is then
** prompted for a single integer which is passed to the calcTriangularNum function to return
** the triangular number for a triangle with a base with the number of dots the user
** provides. The menu is repeated after any of the above functions complete, or the user may
** quit from the menu.
***********************************************************************************************/

#include <iostream>

#include "Menu.hpp"
#include "IntNode.hpp"

using std::cout;
using std::endl;

/***********************************************************************************************
** Description: This program can be run via the lab6 executable generated by make.
***********************************************************************************************/
int main() {

  //Menu *mainMenu = nullptr;
  IntNode *head = nullptr;
  head = new IntNode;
  std::cout << head->getVal() << std::endl;
  return 0;

}