#include <iostream>
using namespace std;
class TollBooth
{
public:
TollBooth()
{
number_of_cars=0;
amount_of_money=0;
}
void payingCar()
{
number_of_cars++;
amount_of_money+=150.50;
}
void nopaycar()
{
number_of_cars++;
}
void display()
{
cout<<" amount_of_money="<<amount_of_money<<endl;
cout<<"number_of_cars="<<number_of_cars<<endl;
cout<<"loss="<<(number_of_cars*150.50)-amount_of_money<<endl;
}
private:
unsigned int number_of_cars;
double amount_of_money;
};
int main()
{
TollBooth cars;
char enter;
cout<<"enter p,n or q=";
cin>>enter;
if(enter=='q')
{cars.display();
}

else
{
while(enter!='q')
{


if(enter=='p')
{
cars.payingCar();
}
else if(enter=='n')
{
cars.nopaycar();
}


else 
{
cout<<"invalid inputs try again"<<endl;
cin>>enter;
}
cin>>enter;
}

cars.display();

}


}

