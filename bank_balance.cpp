#include <iostream>

using namespace std;

class Human
{
  private:
  int bankBalance;

  public:
  Human()
  {
    bankBalance = 1000;
  }
  Human(int num)
  {
    bankBalance = num;
  }

  string name;

  void setBankBalance(int num)
  {
    bankBalance = num;
  }

  int getBankBalance()
  {
    return bankBalance;
  }
};

int main()
{
  Human human1;
  cout<<human1.getBankBalance();
  human1.name = "Gaurav";
  human1.setBankBalance(54000);

  cout<<human1.name<<endl;
  cout<<human1.getBankBalance();

  Human human2(20000);
  cout<<human2.getBankBalance();
}
