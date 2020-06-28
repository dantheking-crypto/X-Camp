// Find how different values of k numbers will add up to n (e.g. if n was 7 and k was 3, one solution is 2, 2, 3). Note that 2, 2, 3 is the same as 2, 3, 2.
#include <iostream>
using namespace std;
inline int getsum (int arr[], int index) {
  int sum = 0;
  for (int i = 0; i <= index; i++) {
    sum += arr[i]; 
  }
  return sum;
}
int main() {
  int n, k;
  cin >> n >> k;
  int total = 0;
  int arr[k - 1];
  for (int i = 0; i < k - 1; i++) {
    arr[i] = 1;
  }
  while (true) {
    int sum = 0;
    for (int i = 0; i < k- 1; i++) {
      sum += arr[i];
    }
    if (n - sum >= arr[k - 2]){
      total++;
      // for (int i = 0; i < k - 1; i++) {
      //   cout << arr[i] << " ";
      // }
      // cout << endl;
    }
    arr[k - 2]++;
    for (int i = k - 3; i >= 0; i--) {
      if (arr[i + 1] <= (n - getsum(arr, i)) /( k - i - 1)) break;
      arr[i]++;
      for (int j = i + 1; j < k - 1; j++) {
        arr[j] = arr[i];
      }
    }
    // for (int j = 0; j < k - 1; j++) {
    //     cout << arr[j] << " ";
    //   }
    //   cout << endl;
    if (arr[0] > n / k) break;
  }
  cout << total;
  return 0;
}
