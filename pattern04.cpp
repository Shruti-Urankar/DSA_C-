#include <iostream>
using namespace std;

int main() {
     int n = 3;
     int num = 1;
     for(int i=0; i<n; i++){  //outer loop
     
        for(int j=0; j<n; j++){  //inner loop
            cout<< num << " ";
            // num = num + 1;
            num++;
        }
        cout<< endl;
     }
     cout << "After Pattern Num Value : " << num << endl;
     return 0;
}