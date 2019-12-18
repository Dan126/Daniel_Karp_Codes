//This code displays the number of people whose
//Facebook time exceeds a specific number of minutes and the
//average number of minutes these people spend on Facebook

//Created/Revised by Daniel Karp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Results of poll taken for exceeded minutes spent on Facebook
	int pollResults[25] = {35, 120, 75, 60, 20,
                           25, 15, 90, 85, 35,
                           60, 15, 10, 25, 60,
                           100, 90, 10, 120, 5,
                           40, 70, 30, 25, 5};
    int minutes = 0;
	int numOver = 0;
	int totalMins = 0;
	double average = 0.0;

    cout << "Search for minutes over: ";
    cin >> minutes;

    //search the array
    for (int sub = 0; sub < 25; sub += 1)
		if (pollResults[sub] > minutes)
		{
			numOver += 1;
			totalMins += pollResults[sub];
		} //end if
    //end for

    //Calculating the average amount of time spent by people on Facebook over the given amount of minutes
    average = totalMins / numOver;

    cout << endl << "Number who spend more than " << minutes
        << " minutes" << endl;
    cout << "per day on Facebook: " << numOver << endl;
    cout << fixed << setprecision(1);
    cout << "Average minutes of people who spend more than " << minutes << " minutes: " << average << endl;

    return 0;
 } //end of main function
