#include <iostream>
#include <cmath>
using namespace std;
bool ok(int arr[], int b){
  for (int i=0; i<b; i++){
    if (arr[i] == arr[b] || ((b-i) == (abs(arr[i] - arr[b]))))
      return false;
  }
  return true;
}
  void print (int arr[]){
    static int S = 0;
    cout<<"Solution: "<<++S<<endl;
    for (int i=0; i<8; i++){
      for (int j=0; j<8; j++){
        if (arr[j]==i){
          cout<<"1 ";
        }
        else {
          cout<<"0 ";
        }
      }
      cout<<endl;
    }
    return;
  }
  int main(){
    int q[8] = {};
     int c = 0;

    while (c>=0) {
      
      if (c==7){
        print(q);
      c--;
      }
      else {
        c++;
        q[c] =-1;
      }
  
    while (c>=0){
     
      q[c]++;
      if (q[c]==8){
        c--;
      }      
        else if (ok(q,c)) {
          break;
        }
      }
    }
      return 0;
 }
    
  
      
    
  
      
