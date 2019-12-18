//============================================================================
// Name        : Channel_Bills.cpp
// Author      : Daniel Karp
//============================================================================
#include <iostream>
using namespace std;

void functionRes(int premChannels, double &bills);

void functionBus(int connections, int premChannels, double &bills, double &connectBills);

int main()
{

    int premChannels = 0;
    int connections = 0;
    double bills = 0.0;
    double connectBills = 0.0;
    char pick = 'z';

    cout << "Residential or business customer?(Enter R or B):  "; //R for Residential and B for Business
    cin >> pick;

    if (pick == 'B' || pick == 'b' || pick == 'R' || pick == 'r')
    {
        if(pick == 'R' || pick == 'r'){

        	cout << "Enter amount of premium channels you own: ";
            cin >> premChannels;

            functionRes(premChannels, bills);
        }

        else if(pick == 'B' || pick == 'b')
        {

        	cout << "Enter amount of connections you own:  ";
            cin >> connections;

            cout << "Enter amount of premium channels you own: ";
            cin >> premChannels;

            functionBus(connections, premChannels, bills, connectBills);
        }
    }
    else{
        cout << "Input is wrong, try again.";
    }
    return 0;
}

void functionRes(int premChannels, double &bills){

	bills = premChannels * 5;

    cout << "Processing Fee:     $4.50" << endl;
    cout << "Basic Service Fee:  $30" << endl;
    cout << "Premium Channels:   $" << bills << endl;
}

void functionBus(int connections, int premChannels, double &bills, double &connectBills)
{

	if(connections > 5){
        connectBills = 80 + ((connections - 5) * 4);
    }

    else if(connections < 5){
        connectBills = connections * 80;
    }

    bills = premChannels * 50;

    cout << "Processing Fee:     $16.50" << endl;
    cout << "Basic Service Fee:  $" << connectBills << endl;
    cout << "Premium Channels:   $" << bills << endl;
}

