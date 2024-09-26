// #include <iostream>
// using namespace std;

// int main() {
//      int n = 4;
//     int num = 1;
//      for(int i=0; i<n; i++){  //outer loop

//         for(int j=1; j<=i+1; j++){  //inner loop

//           cout<< num << " ";
//           num++;
       
//         }

//         cout<< endl;
      
//      }
//      return 0;
// }

// Home Work 1
// A 
// B C 
// D E F 
// G H I J 

// #include <iostream>
// using namespace std;

// int main() {
//      int n = 4;
//      char ch = 'A';
//      for(int i=0; i<n; i++){  //outer loop

//         for(int j=1; j<=i+1; j++){  //inner loop

//           cout<< ch << " ";
//           ch++;
       
//         }

//         cout<< endl;
      
//      }
//      return 0;
// }



// Home Work 2
// A 
// B A 
// C B A 
// D C B A 

#include <iostream>
using namespace std;

int main() {
     int n = 4;
    
     for(int i=0; i<n; i++){  //outer loop
       char ch = 'A';
        for(int j=i+1; j>0; j--){  //inner loop

          cout<< ch << " ";
          ch++;
       
        }

        cout<< endl;
      
     }
     return 0;
}
