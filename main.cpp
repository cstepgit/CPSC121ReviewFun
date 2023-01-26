#include "vector_funcitons.h"

int main() {
  vector<int> userNums;
  
  fillVector(userNums);
  
  int maxNum = max(userNums);
  cout << "Max Value: " << maxNum << endl;
  
  int minNum = min(userNums);
  cout << "Min Value: " << minNum << endl;
}