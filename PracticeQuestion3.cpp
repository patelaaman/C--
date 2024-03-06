#include <iostream>
using namespace std;

int main(){
	double WaterConsumption;
	cout<<"Enter your Annual water Consumption = ";
	cin>>WaterConsumption;
	
	if(WaterConsumption>45 && WaterConsumption<75){
		cout<<"Your Annual water Consumption  Tax is = 475.00";
	}
	else if(WaterConsumption>=75 && WaterConsumption<125){
		cout<<"Your Annual water Consumption  Tax is = 750.00";
	}
	else if(WaterConsumption>=125 && WaterConsumption<200){
		cout<<"Your Annual water Consumption  Tax is = 1225.00";
	}
	else if(WaterConsumption>=200 && WaterConsumption<350){
		cout<<"Your Annual water Consumption  Tax is = 1650.00";
	}
	else if(WaterConsumption>=350 ){
		cout<<"Your Annual water Consumption  Tax is = 2000.00";
	}
	else{
		cout<<"Your Anuual Water Consuption Tax is Free";
	}
}
