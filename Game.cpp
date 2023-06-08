
#include "Game.h"


Game::Game(){
  cout << "Default Constructor";
}

void Game::LoadElements(){

  //declare streams for input
  ifstream inputStream;
  inputStream.open(proj2_data.txt);
  string tempLine;
  string element1;
  string element2;
  string name;
  getline(cin, tempLine);
  for(int i = 0; i < sizeof(tempLine); i++){
    Element i;
    //initializing an element and loading in all of its
    //member variables using file I/O
    inputStream >> name;
    Element.m_name = name;
    inputStream >> element1;
    Element.m_element1 = element1;
    inputStream >> element2;
    Element.m_element2 = element2;
  }
}

void Game::StartGame(){

  cout << "Welcome to the Alchemist!, ";
  string name = getName();
  cout << name;
  
  int choice;

  //do-while loop to keep track of menu options
  do{
    cout << "What would you like to do?" << endl;
    cout << "1. Display the Alchemist's Elements" << endl;
    cout << "2. Attempt to Merge Elements" << endl;
    cout << "3. See Score" << endl;
    cout << "4. Quit" << endl;
    cin >> choice;
    if(choice != 1 && choice != 2 && choice != 3 && choice != 4)
      do
	cin >> choice;
      while(choice != 1 && choice != 2 && choice != 3 && choice != 4)
  }
  while(choice == 1 || choice == 2 || choice == 3 || choice == 4)
    {
      //controls for each choice chosen
      if(choice == 1)
	DisplayElements();
      if(choice == 2)
	CombineElements();
      if(choice == 3)
	{double score = calcScore();
	 cout << score;
	}
      if(choice == 4)
	cout << "Thank you for playing the alchemist. Good bye!";
    }
}


void DisplayElements(){
  for(int i = 0; i < PROJ2_SIZE; i++){
    cout << m_elements.i+1[i];
    //simple while loop to view list
  }
}

void CombineElements(){

  ifstream inputStream;
  inputStream.open(proj2_data.txt);
  string tempLine;
  string element1;
  string element2;
  string name;
  getline(cin, tempLine);
  for(int i = 0; i < sizeof(tempLine); i++){
    Element i;
    //initializing an element and loading in all of its                                                       
    //member variables using file I/O                                                                         
    inputStream >> name;
    Element.m_name = name;
    inputStream >> element1;
    Element.m_element1 = element1;
    inputStream >> element2;
    Element.m_element2 = element2;

    if(name == element1 && element2)
      for(int i = 0; i < PROJ2_SIZE; i++)
	cout << name;
  }//similar to above first function, but checks for combination
}

void RequestElement(int &choice){

  string element1;
  string element2;
  //requests to see if there's an element with the 2 combinations
  if(element1 && element2 || ",", name)
    cout << name;
}


void GameTitle(){
  cout << "**************************************************************" << endl;
  cout << "    AAA   L     CCCCC  H   H  EEEEE  M   M  I  SSSSS  TTTTT   " << endl;
  cout << "   A   A  L     C      H   H  E      MM MM  I  S        T     " << endl;
  cout << "   AAAAA  L     C      HHHHH  EEEEE  M M M  I  SSSSS    T     " << endl;
  cout << "   A   A  L     C      H   H  E      M   M  I      S    T     " << endl;
  cout << "   A   A  LLLLL CCCCC  H   H  EEEEE  M   M  I  SSSSS    T     " << endl;
  cout << "**************************************************************" << endl;
}//beginning output

void CalcScore(){
  cout << numElements/PROJ2_SIZE;
  //calulation for how many combinations found
}


int SearchRecipes(string X, string Y){
  for(int i = 0; i < PROJ2_SIZE; i++){
    if(tempLine[i] == X && tempLine[i] == Y)
      return 1;
    //searches to see if a certain recipe exists within the data file
  }
  return 0;
}

