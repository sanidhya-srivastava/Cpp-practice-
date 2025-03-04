#include <iostream>

using namespace std;

int main() {
   int rows = 9;
   for (int i = 1; i <= rows; ++i) 
   {
       for (int j = 1; j <= (i <= rows / 2 + 1 ? i : rows - i + 1); ++j) {
           cout << "* ";
       }
       cout << endl;
   }

   return 0;
}
