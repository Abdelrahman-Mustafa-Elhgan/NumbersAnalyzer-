#include <iostream>
using namespace std;


int main () {


    int n, sum = 0;
    int max = n;
    int min = n;
    int evenCounter = 0;
    int oddCounter = 0;
   
   cout << "Enter 5 Numbers" << "\n";

   for (int i = 1; i <= 5; i++)
   {
      cout << "Enter a Number " << i << ":";
      cin >> n;

      if (n % 2 == 0) {
         evenCounter++;
      } else {
         oddCounter++;
      }
      sum += n;
      if (n > max) max = n;
      if (n < min) min = n;
      
   } 
   cout << "The Numbers Even: " << evenCounter << "\n";
   cout << "The Numbers Odd: " << oddCounter << "\n";
   cout << "The Sum: " << sum << "\n";
   cout << "The Big Number: " << max << "\n";
   cout << "The Sumall Number: " << min << "\n";
}