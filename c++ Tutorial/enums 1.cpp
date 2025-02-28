#include <iostream>

enum day{sunday = 0 , monday = 1 ,tuesday = 2};

int main(){
// enums = a user-defined data type that consists
//         of paired named-integer constants.
//         great if you have a set of potential options

  day today =sunday;

  switch (today)
  {
  case sunday: std::cout << "It is sunday \n";
    break;
    case monday: std::cout << "It is monday \n";
    break;
    case tuesday: std::cout << "It is tuesday \n";
    break;
  
  default:std::cout << "NOne";
    break;
  }

    return 0;
}