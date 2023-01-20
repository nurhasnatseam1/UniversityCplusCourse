#include <iostream>

using namespace std;

int main()
{
    double P,L,X,Ra,Rb,BM;
    //printing the objective of the code to the user;
    string Objective = "This program takes the Length of Simple Beam as well as \n\
    Location and Magnitude of point load and \n\
    Calculates the Reaction at both supports(A,B) and maximum Bending Moment";
    // asking for the Magnitude of Point load
    cout << "Magnitude of Point Load: ";
    cin >> P;
    cout << "\nLength of Simply Supported Beam: ";
    cin >> L;
    cout << "\nDistance of Point Load from Left Support(A): ";
    cin >> X;
    // Calculation for Reaction at A
    Ra = (P*(L-X))/L;
    //Calculation for Reaction at B
    Rb = P-Ra;
    //Calculation for Max BM
    BM = Ra * X;
    //printing the Results
    cout<<"\nResults:";
    cout<<"\n Reaction at Support A = "<<Ra;
    cout<<"\n Reaction at Support B= "<<Rb;
    cout<<"\n Maximum Bending Moment = "<<BM<<endl;
    return 1;
}
