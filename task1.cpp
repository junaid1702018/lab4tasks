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
double payingCar()
{
number_of_cars++;
amount_of_money+=150.50;
}
double nopaycar()
{
number_of_cars++;
}
double display()
{
return amount_of_money;
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
{
double x=cars.display();
cout<<x<<endl;
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
double x=cars.display();
cout<<x<<endl;
}


}

