#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int minOperationsToSort(vector<int>& arr) {
    // Use a set to store unique elements
    unordered_set<int>s;
    for(auto x:arr){
        s.insert(x);
    }
    
    // The size of the set is the number of unique elements
    return s.size();
}

int main() {
    // Example usage
   vector<int> arr = {3, 1, 2, 3, 2};
   cout << "Minimum number of operations required: " << minOperationsToSort(arr);
return 0;
}
