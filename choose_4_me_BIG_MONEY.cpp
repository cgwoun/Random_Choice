#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_choice(int min, int max){
  srand((unsigned)time(0));
  int range = (max-min)+1;
  int random_integer = min+rand()%range;
  return random_integer;
}

int main(int argc, char* argv[]){
  if(argc != 3){
    cerr << "SMH. Put in two numbers. Coooommmee onn!\n";
    return -1;
  }
  int min=atoi(argv[1]), max=atoi(argv[2]);
  if(min >= max){
    cerr << "Stop trolling with the values :)"
	<< "\nsmaller number on left and larger number on right"
	<< "\nand don't put the same number twice bro smh" << endl;
    return -1;
  }
  cout << random_choice(min,max) << endl;
  return 0;
}
