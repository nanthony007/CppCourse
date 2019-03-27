#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[]) {

  double tax_rate = 0.07;
  double item_running_total = 0;
  double tax_total = 0;
  double total_due = 0;

  double item1price, item1tax, item1total;
  double item2price, item2tax, item2total;
  double item3price, item3tax, item3total;
  double item4price, item4tax, item4total;
  double item5price, item5tax, item5total;


  cout << "Enter a price for Item 1: ";
  cin >> item1price;
  cout << "Enter a price for Item 2: ";
  cin >> item2price;
  cout << "Enter a price for Item 3: ";
  cin >> item3price;
  cout << "Enter a price for Item 4: ";
  cin >> item4price;
  cout << "Enter a price for Item 5: ";
  cin >> item5price;

  item1tax = item1price * tax_rate;
  item1total = item1price + item1tax;

  item2tax = item2price * tax_rate;
  item2total = item2price + item2tax;

  item3tax = item3price * tax_rate;
  item3total = item3price + item3tax;

  item4tax = item4price * tax_rate;
  item4total = item4price + item4tax;

  item5tax = item5price * tax_rate;
  item5total = item5price + item5tax;

  item_running_total = item1price + item2price + item3price + item4price + item5price;
  tax_total = item1tax + item2tax + item3tax + item4tax + item5tax;
  total_due = item1total + item2total + item3total + item4total + item5total;


  cout << fixed << setprecision(2) << setw(20) << right << "Item Cost" << setw(20) << right << "Item Tax" << setw(20) << right <<"Item Subtotal" << '\n';
  cout << "---------------------------------------------------------------" << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item1price << setw(20) << right << item1tax << setw(20) << right << item1total << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item2price << setw(20) << right << item2tax << setw(20) << right << item2total << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item3price << setw(20) << right << item3tax << setw(20) << right << item3total << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item4price << setw(20) << right << item4tax << setw(20) << right << item4total << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item5price << setw(20) << right << item5tax << setw(20) << right << item5total << '\n';
  cout << "---------------------------------------------------------------" << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << "Items Total" << setw(20) << right << "Tax Total" << setw(20) << right <<"Total Due" << '\n';
  cout <<  fixed << setprecision(2) << setw(20) << right << item_running_total << setw(20) << right << tax_total << setw(20) << right << total_due << '\n';

  return 0;
}
