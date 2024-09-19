#include<iostream>
using namespace std;

int main(){
   float tea_price = 49.99;

   int roundedTeaPrice = (int) tea_price;

   int tea_quantity = 20;

   double totalPrice = tea_price * tea_quantity;
   cout << totalPrice << endl;
   return 0;
}