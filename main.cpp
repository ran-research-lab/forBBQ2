#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
using nlohmann::json;
using namespace std;

// This program reads the json file and prints the settings specified

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    cout << "Usage: " << argv[0] << " JSONFileName" << endl;
    exit(1);
  }

  std::ifstream f(argv[1]);
  json jsonObj;

  if (!f.is_open()) {
    cout << "Cannot find file " << argv[1] << endl;
    exit(1);
  }

  f >> jsonObj;
  cout << "Simulation parameters read from file:" << endl;
  for (auto& [key, value] : jsonObj.items()) 
        cout << key << ": " << value << "\n";

  return 0;
}
