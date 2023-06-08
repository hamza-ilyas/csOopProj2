
#include "Alchemist.h"



Alchemist::Alchemist(){
  cout << "Welcome Alchemist.";
}


Alchemist::Alchemist(string name){
  cout << "Welcome ";
}
//the function above and below this comment work together
string Alchemist::GetName(){
  return m_myName;
}

void Alchemist::SetName(string name){
  m_myName = name; //use a setter to set name
}

void Alchemist::DisplayElements(){
  for(int i = 0; i < PROJ2_SIZE; i++){
    cout << i << ": ";
    cout << m_myElements[i].m_name; //separately use these lines to output the elements
  }
}

int Alchemist::GetNumElements(){
  return m_numElements; //getter for num elements
}

bool Alchemist::CheckElement(Element X){
  for(int i = 0; i < PROJ2_SIZE; i++){
    if(m_myElements[i].m_name == X)
      return 1; //if true
  }
  return 0; //if loop ends, it must be false
}

void Alchemist::AddElement(Element Y){
  int count = 0;
  for(int i = 0; i < PROJ2_SIZE; i++){
    if(m_myElements[i].m_name == Y.m_name)
      count += 0;
    else count += 1;//use a temp value to add a specific element
  }
  if(count == 1)
    m_numElements += 1;
}


Element GetElement(int X){
  return m_myElements[X].m_name;//get the name of a specific element
}


void AddAttempt(){
  GetAttempts() += 1;
  //m_attempts += 1;
}

int GetAttempts(){
  int attempts = m_attempts;
  return attempts;
}
//simple getters and mutators for variables
void AddRepeat(){
  GetRepeats();
  m_repeats += 1;
}

int GetRepeats(){
  int repeats = m_repeats;
  return repeats;
}

