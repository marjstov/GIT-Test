#include <iostream>

using namespace std;

int Sum(int z){
  for(int i = 1; i <= z; i++)
    {
      cout << "Sum of 1 to " << i << " is " << i*(i+1)/2 << endl;
    }
  return i;
}

int Product(int y){
  for(int n = 1; n <= y; n++){
    cout << "product of 1 to " << n << " is " << n*n << endl;
  }
  return n;
}

int main(){

  int x;

  cout << "Hello World!" << endl;

  cout << "What number do you want to pick to get the sum?";
  cin >> x;
  sum(x);
  product(x);
  return 0;
}
