#include<iostream>

using namespace std;

int main(){

  int n;
  cout << "\nEnter the number of elements: ";
  cin >> n;
  cout << "\nEnter the array elements: \n";
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int target;
  cout << "\nEnter the target element: ";
  cin >> target;
  int start = 0, end = n-1, mid;
  bool found = false;
  while(satrt<=end){
    mid = (start+end)/2;
    if(arr[mid] == target){
      found = true;
      break;
    }
    else if(arr[mid] > target){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }
  
  if(found){
      cout << "Element found at index " << mid << "\n";
  }
  else{
      cout << "Element not found\n";
  }
  
  return 0;
}
