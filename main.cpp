#include <iostream>

using namespace std;

int main()
{
    double h , v, g;
    cout << "Introduceti inaltimea in cm : " ;
    cin >> h ;
    cout << "Multumesc ."   << endl;
    cout << "Introduceti varsta          : " ;
    cin >> v ;
    cout << "Multumesc ."  << endl;
    g =50+0.75*(h-150)+0.25*(v-20) ;
    cout << " Greutatea ideala daca esti barbat este: " << g << " kg."  <<endl ;
    cout << " Greutatea ideala daca esti femeie este: " << g * 0.9 << " kg." << endl;

    cin . get( );

    return 0;
}
