//restaurant menu system
#include <iostream>
using namespace std;
int main(){
	int order=0;
	int a_deals=0,b_deals=0,c_deals=0,d_deals=0,e_deals=0,f_deals=0;
	double BBQ_platter=0,CC_pizza=0,Calzone_pasta=0,Sushi=0,CC_rice=0,Fresh_lime=0;
	cout<<"|---------------------------MENU-----------------------------|"<<endl;
	cout<<endl;
	cout<<" (1)  Roasted BBQ platter                            $20 only."<<endl;
	cout<<" (2)  Crown Crust Pizza                              $9.5 only."<<endl;
	cout<<" (3)  Calzone Pasta                                  $5.5 only."<<endl;
	cout<<" (4)  Sushi with Special Wasabi                      $15  only."<<endl;
	cout<<" (5)  Chicken Chilli with Rice                       $8.5 only."<<endl;
	cout<<" (6)  Fresh Lime                                     $1.25 only."<<endl;
	cout<<" (-1) To Complete Your Order "<<endl<<endl;

while(order>=0){
	cout<<" Please select the order number: ";
	cin>>order;
	cout<<endl;

	switch(order) {

        	case 1:
		cout<<" Order: Roasted BBQ platter."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>a_deals;
        cout<<"---------------------------------------------";
        cout<<endl<<endl;
		BBQ_platter =20 * a_deals;
		break;

			case 2:
		cout<<" Order: Crown Crust Pizza."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>b_deals;
        cout<<"---------------------------------------------";
        cout<<endl<<endl;
        CC_pizza = 9.5 * b_deals;
		break;

            case 3:
		cout<<" Order : Calzone Pasta."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>c_deals;
        cout<<"---------------------------------------------";
        cout<<endl;
		Calzone_pasta = 5.5 * c_deals;
		cout<<endl<<endl;
		break;

            case 4:
		cout<<" Order : Sushi with Special Wasabi."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>d_deals;
        cout<<"---------------------------------------------";
        cout<<endl<<endl;
		Sushi = 15 * d_deals;
		cout<<endl;
		break;

            case 5:
		cout<<" Order : Chicken Chilli with Rice."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>e_deals;
        cout<<"---------------------------------------------";
        cout<<endl<<endl;
		CC_rice = 8.5 * e_deals;
		break;

            case 6:
		cout<<" Order : Fresh Lime."<<endl;
		cout<<" Please enter the number of deals: ";
        cin>>f_deals;
        cout<<"---------------------------------------------";
        cout<<endl<<endl;
		Fresh_lime = 1.25 * f_deals;
		break;

            case -1:
        cout<<"---------------------------------------------"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<" Your Order has been has been completed !!!! "<<endl<<endl;
        cout<<" Total No of orders : "<<a_deals+b_deals+c_deals+d_deals+e_deals+f_deals<<" orders"<<endl;
        cout<<" Total Bill to be Payed : $"<<BBQ_platter+CC_pizza+CC_rice+Calzone_pasta+Sushi+Fresh_lime<<" only"<<endl;
        cout<<endl;
		cout<<"---------THANK YOU FOR COMING-----------"<<endl;
}
}

return 0;
}

