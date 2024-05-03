#include <iostream>

using namespace std;

#include <iostream>
#include "WaitingQueue.h"
#include "Bank.h"
using namespace std;
int main()
{

    Bank b1;
    Customer c1 = Customer("A", 35, 62);
    Customer c2 = Customer("B", 39, 57);
    Customer c3 = Customer("C", 78, 124);
    Customer c4 = Customer("D", 79, 32);
    Customer c5 = Customer("E", 80, 15);
    Customer c6 = Customer("F", 90, 10);
    Customer c7 = Customer("G", 95, 20);
    Customer c8 = Customer("H", 107, 20);

    b1.addCustomerToPriorityQueue(c1);
    b1.addCustomerToPriorityQueue(c2);
    b1.addCustomerToPriorityQueue(c3);
    b1.addCustomerToPriorityQueue(c4);
    b1.addCustomerToPriorityQueue(c5);
    b1.addCustomerToPriorityQueue(c6);
    b1.addCustomerToPriorityQueue(c7);
    b1.addCustomerToPriorityQueue(c8);
    b1.run2();



    return 0;
}
