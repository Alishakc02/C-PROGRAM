// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF DIGITALWALLET
#include <iostream>
using namespace std;

class digitalwallet
{
private:
    string user_name;
    int wallet_id;
    double balance;

public:
    digitalwallet(const string &name) : user_name(name), balance(0) {}

    void setwallet_id(int n)
    {
        wallet_id = n;
    }

    int getwallet_id()
    {
        return wallet_id;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Dear " << user_name << ", your account has been credited by NPR " << amount << " to your wallet." << endl;
        }
        else
        {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }

    void payment(double amt)
    {
        balance -= amt;
        cout << "Dear " << user_name << ", your account has been debited by NPR " << amt << ". Remaining balance: NPR " << balance << endl;
    }

    void fundtransfer(digitalwallet &recipient, double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            recipient.balance += amount;
            cout << "NPR " << amount << " has been successfully transferred "
                 << " to " << recipient.user_name << "." << endl;
        }
        else
        {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    void displayBalance() const
    {
        cout << "Your wallet balance: NPR " << balance << endl;
    }
};

int main()
{
    string user1_name = "alisha";
    digitalwallet alisha(user1_name);

    string user2_name = "anmol";
    digitalwallet anmol(user2_name);

    digitalwallet w1("User1");
    w1.setwallet_id(1356);
    cout << "Dear " << user1_name << ", your wallet id is " << w1.getwallet_id() << endl;

    alisha.deposit(11000);
    alisha.displayBalance();
    cout << endl;

    alisha.payment(2000);
    alisha.displayBalance();
    cout << endl;

    alisha.fundtransfer(anmol, 2000);
    alisha.displayBalance();

    return 0;
}