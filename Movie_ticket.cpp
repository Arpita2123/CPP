#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
    string name;
    int no_adult, no_child , total;
    float price_ad , price_child , donation_per , deposit_amount , amount ,gross_amount ;

    cout << "Enter a movie name:";
    cin >> name;
    cout << "Adult ticket price :";
    cin >>  price_ad;
    cout << "Child ticket price :";
    cin >> price_child;
    cout << "number of adults ticket sold:";
    cin >> no_adult;
    cout << "number of childs ticket sold:";
    cin >>  no_child;
    cout << "persentage of gross for donation to charity:";
    cin >> donation_per;

    gross_amount = (no_adult * price_ad) + (no_child * price_child);
    deposit_amount = (gross_amount * donation_per)/100;
    total = no_adult + no_child;

    cout << "Movie Name :" << name << endl ;
    cout << "Number of ticket sold :" << total << endl ;
    cout << "Gross amount :" <<gross_amount << endl ;
    cout << "Persentage of gross amount donated :" <<donation_per << endl ;
    cout << " Amount donated :" << deposit_amount << endl ;
    cout << "Net sale :" << amount << endl  ;

    return 0;

    

}