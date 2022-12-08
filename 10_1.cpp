//1. Написати програму, яка нараховує заробітну плату перекладача,
// який переклав з однієї мови на іншу певну кількість сторінок,
 //якщо відома вартість письмового перекладу однієї сторінки тексту.
#include <iostream>
using namespace std;
int main ()
{
double x,y,z;
cout << "the cost of a written translation of each page text (dollars): ";
cin >> x;
cout << "number of pages: ";
cin >> y;
z=x*y;
cout << "Result: "<< z << " $";
system("pause>>void");
return 0;
}