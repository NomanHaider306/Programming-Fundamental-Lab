#include<iostream>
using namespace std;

int main()
{
  string name;
  int Wins, Loss, Draw;
  cout << "Enter the name of cricket team : ";
  cin >> name;
  cout << "Enter the number of wins : ";
  cin >> Wins;
  cout << "Enter the number of losses : ";
  cin >> Loss;
  cout << "Enter the number of draws : ";
  cin >> Draw;
  int Points = (Wins * 3) + (Draw * 1);
  cout << name<< " has " << Points << " Point in Asia Cup"<< endl;
  return 0;


}