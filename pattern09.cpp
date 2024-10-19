#include <iostream>
using namespace std;

int main() {
     int n = 4;
    
     for(int i=0; i<n; i++){ 
          for(int j=0; j<i; j++){
               cout<<" ";
          }
          for(int j=0; j<n-i; j++){
               cout<<(i+1);
          }
          cout<<endl;
     }
     return 0;
}

// O/P:
// 1111
//  222
//   33
//    4


// Home Work
// #include <iostream>
// using namespace std;

// int main() {
//      int n = 4;
//      char ch='A';
//      for(int i=0; i<n; i++){ 
      
//           for(int j=0; j<i; j++){
//                cout<<" ";
//           }
//           for(int j=0; j<n-i; j++){
//                cout<<(ch);
               
//           }
//           cout<<endl;
//           ch++;
//      }
//     return 0;
// }

// o/p 
// AAAA
//  BBB
//   CC
//    D