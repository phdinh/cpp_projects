#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* A metric ton is 35,273.92 ounces. Write a program that will read the weight of a package of breakfast cereal in ounces and 
    output the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal. */

    //intro 
    cout << "Cereal Box Calculator " << endl;
    cout << string(50, '-') << endl;

    //input
    cout << "Enter ounces per box of cereal: "; //prompt
    double ouncesPerBox; //store input
    cin >> ouncesPerBox; //read input

    //processing
    const double OZ_PER_BOX = 35273.92;
    double wtInTons = ouncesPerBox / OZ_PER_BOX;
    double boxesPerTon = 1.0 / wtInTons;

    //output
    cout << "Weight in metric tons, boxes per ton: [" << wtInTons << ", " << boxesPerTon << "]" << endl;
    return 0;
}

