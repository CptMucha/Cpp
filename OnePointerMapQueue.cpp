#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <unordered_map>
using std::cin, std::cout, std::endl, std::map, std::unordered_map, std::string, std::queue;

void Pointer()
{  //A pointer points to a location in memory; when called with *, it prints the value stored at that location; otherwise, it prints only the address of the memory location
  int pointer = 68;
  int* a = &pointer;
  cout << *a << endl;
}

void Mapa(char q)
{  //The map contains values; when an identifier is called, the value is printed; this is a one-way operation
  map<char, int> mpp; 
    mpp['#'] = 25;
    mpp['&'] = 24;
    mpp['@'] = 21;
    cout<< mpp[q] << endl;
}

void UnorderedMapa()
{//unorderedmap is the same as map, but it's faster because it doesn't depend on the order in which elements are inserted
    unordered_map<string, int> Unorderedmpp; 
    Unorderedmpp["Ananas"] = 10;
    Unorderedmpp["Protein"] = 88;
    Unorderedmpp["Celer"] = 101;
    cout <<Unorderedmpp["Celer"] << endl;
}

void Queueue()
{//first in first out
    queue <int> ticket;
    ticket.push(11);
    ticket.push(12);
    ticket.push(109);
    cout << "FiFo: " << ticket.front()<< endl;
    while (!ticket.empty())
    {
      cout<< "Repeat queue, till queue is empty: " << ticket.front()<< endl;
      ticket.pop();
    }
}

int main() 
{
 Pointer();
 char q ='#';
 Mapa(q);
 UnorderedMapa();
 Queueue();
 return 0;
}