#ifndef CUSTOMER_H
#define CUSTOMER_H



#include <string>
using namespace std;
class Customer
{


public:
	string name;
	int EventTime;//arrival or leave Depending on EventType
	string EventType="Arrival";//arrive o r leave
	int WaitingTime;
	int ServiceTime;
	int age;
	int hasplat;
	int hasVIP;
	bool served=false;
	int LeaveTime;


	Customer(){}
	/*Customer(string name, int eventTime, int serviceTime )
	{
		this->name = name;
		this->EventTime = eventTime;


		this->ServiceTime = serviceTime;
		this->age = age;


	}

	bool operator==(const Customer& other) const {
		return (name == other.name) && (EventTime == other.EventTime) && (ServiceTime == other.ServiceTime);
	}

	*/

	//////////////

	int ArrivalTime, LeavingTime;
	Customer(string name, int arrivalTime, int serviceTime)
	{
		this->name = name;
		this->ArrivalTime = arrivalTime;
		this->ServiceTime = serviceTime;

	}

	//////////////////
	Customer(string name, int arrivalTime, int serviceTime , int vip)
	{
		this->name = name;
		this->ArrivalTime = arrivalTime;
		this->ServiceTime = serviceTime;
		this->hasVIP = vip;

	}
};

#endif // CUSTOMER_H
