#include <iostream> 
using namespace std; 
int main ()  { 
 int n, num; 
 double sum; 
  
 
 cout << "How may numbers are you going to type "; 
 cin>> n; 
 
 for (int c = 1; c < n; c++) { 
        cout << c << endl; 
    }   // add counter
 
    do { 
        cout << "How may numbers are you going to type "; 
        cin>> n; 
    } while (n < 1 || n > 10); 
  
    return 0; 
} 
