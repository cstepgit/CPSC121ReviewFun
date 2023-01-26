#include "vector_funcitons.h"

void fillVector(vector<int>& vec){
  int num;
  int totalNumbers = 5;
  for (int i =0; i< totalNumbers; i++){
    cout << "Enter a number (" << i+1 << "/" << totalNumbers << "): ";
    cin >> num;
    vec.push_back(num);
  }
}
int max(vector<int>& vec){
  int max = vec.at(0);
  for (int i = 0; i < vec.size(); i++){
    if (vec.at(i) > max){
      max = vec.at(i);
    }
  }
  return max;
}
int min(vector<int>& vec){
    int min = vec.at(0);
  for (int i = 0; i < vec.size(); i++){
    if (vec.at(i) < min){
      min = vec.at(i);
    }
  }
  return min;
}



