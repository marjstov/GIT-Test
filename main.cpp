#include <iostream>

using namespace std;

int Sum(int z){
  for(int i = 1; i <= z; i++)
    {
      cout << "Sum of 1 to " << i << " is " << i*(i+1)/2 << endl;
    }
}
int main(){

  int x;

  cout << "Hello World!" << endl;

  cout << "What number do you want to pick to get the sum?";
  cin >> x;

  return 0;
}
