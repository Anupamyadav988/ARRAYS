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