//Authors:Yaneth Reyes Hinojosa 
#include <iostream>
#include <string>


int main()
{
  std::string adjective;
  std::cout<<"Adjective\n";
  std::cin>>adjective;

  char letter;
  std::cout<<"Capital Letter\n";
  std::cin>>letter;

  int age; 
  std::cout<<"Number (1-1000)\n";
  std::cin>>age;

  std::string place;
  std::cout<<"Noun (Place)\n";
  std::cin>>place;

  std::string noun;
  std::cout<<"Animal or Object\n";
  std::cin>>noun;

  std::string verb;
  std::cout<<"Past Tense Verb\n";
  std::cin>>verb;

  double decimal;
  std::cout<<"Number with Decimal\n";
  std::cin>>decimal;

  std::cout<< "The " <<adjective<< " cyborg was born with a(n) " <<letter<< " on his face.\n"
  "When the cyborg was " <<age<< " he went to the " <<place<< " to meet his friend the " <<noun<< ".\n"
  "They both " <<verb<< " until they were " <<decimal<< " years old.\n";
  return 0;
}
