Approach

// We are given an array in which we need to find a given element and return its index if present and -1, if not present.
// So, we just start from the first index and traverse the whole array up to the (n-1)th element and compare each element with the given number.
// If at some index they both match, just return the index.
// If we reach the end of the array and no element from the array matches with the given number, return -1.
#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int array[],int n,int element){

    for(int i =0; i <n; i++){

        if(array[i]==element){
            return i;
        }
    }
    return -1;

}

int main(){
    int n =5, element = 4;
   int array [n]= {1,2,3,4,5};
   cout << LinearSearch(array,n,element);

    return 0;
}
// Time Complexity: O(N) { At the worst case, the whole array would be traversed i.e N elements }.

// Space Complexity: O(1) { There is no extra space being used in this approach }.
