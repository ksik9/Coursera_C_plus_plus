#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class PiggyBank {
  public:
    PiggyBank(int o, int f, int tn, int tw) {
      ones = o;
      fives = f;
      tens = tn;
      twenties = tw;
    }
  
    int GetOnes() {
      return ones;
    }
  
    void SetOnes(int new_ones) {
      ones = new_ones;
    }
  
    int GetFives() {
      return fives;
    }
  
    void SetFives(int new_fives) {
      fives = new_fives;
    }
  
    int GetTens() {
      return tens;
    }
  
    void SetTens(int new_tens) {
      tens = new_tens;
    }
  
    int GetTwenties() {
      return twenties;
    }
  
    void SetTwenties(int new_twenties) {
      twenties = new_twenties;
    }
  
  private:
    int ones;
    int fives;
    int tens;
    int twenties;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////
public:
  Cash(int o, int f, int tn, int tw) : PiggyBank(o, f, tn, tw) {}

  int GetOnesCash() {
      return GetOnes();
    }
  
    void SetOnes(int new_ones_cash) {
      SetOnes(new_ones_cash);
    }
  
    int GetFivesCash() {
      return GetFives();
    }
  
    void SetFives(int new_fives_cash) {
      SetFives(new_fives_cash);
    }
  
    int GetTensCash() {
      return GetTens();
    }
  
    void SetTens(int new_tens_cash) {
      SetTens(new_tens_cash);
    }
  
    int GetTwentiesCash() {
      return GetTwenties();
    }
  
    void SetTwenties(int new_twenties_cash) {
      SetTwenties(new_twenties_cash);
    }

  void DisplayBills(){
    
    cout << "One-dollar bill: " << GetOnesCash() << endl;
    cout << "Five-dollar bill: " << GetFivesCash() << endl;
    cout << "Ten-dollar bill: " << GetTensCash() << endl;
    cout << "Twenty-dollar bill: " << GetTwentiesCash() << endl;
  }

  void DisplayCashTotal(){
    total = GetOnesCash() * 1 + GetFivesCash() * 5 + GetTensCash() * 10 + GetTwentiesCash() * 20;
    cout << "Total amount: " << total << endl;
  }

private:
  int total;
  };
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Cash c(1, 2, 3, 4);
  c.DisplayBills();
  c.DisplayCashTotal();
  Cash c2(9, 8, 7, 6);
  c2.DisplayBills();
  c2.DisplayCashTotal();

  //DO NOT EDIT code above this line
  
  return 0;
  
}
