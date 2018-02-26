#include <iostream>
#include <string>

using namespace std;

const int LIST_SIZE = 4;

int main()
{
  int index;
  string thing;
  string toDo[LIST_SIZE] = {"hello", "second thing", "third thing", "fourth thing"};
 

  for (index=0 ; index < LIST_SIZE ; index++)
  {
    cout<<"Give me a thing to do: ";
    cin>>thing;
    toDo[index] = thing;

  }

  for (index=0; index < LIST_SIZE; index++)
  {
    cout<<toDo[index]<<endl;
 
  }
  return 0;
}
