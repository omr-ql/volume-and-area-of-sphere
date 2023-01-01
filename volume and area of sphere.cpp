#include <iostream>
#include <cmath>
using namespace std ; 
float volume_sphere (int r) ; 
float area_sphere (int r) ;
int main () {
   int r ;  
   cout << "Enter the raduis = " ;
   cin >> r ;
   cout << "The volume of sphere is = " << volume_sphere (r) << endl ;
   cout << "The area of sphere is = " << area_sphere (r) << endl ; 
}

float volume_sphere (int r){
    
    return 4/3 * M_PI * pow(r,3) ; 
} 
float area_sphere (int r){
    return 4 * M_PI * pow(r,2)  ;
}