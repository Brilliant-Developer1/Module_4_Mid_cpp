/*
How does class and object work? How to declare an object?

A class is a blueprint for the object.
We can think of a class as a blueprint of a car, It contains all the details about the car, like door, windowes, color, seat, break, tiear etc. by using this details we can build a car.
So here the car is the Object.

To declare an Object we need to use a keyword "class" and a name for the object, then a access modifier like public, privet and protected. then we have to create the deffernt parts of the object and allocate any value to it.
Example:-

*/

// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

class Car
{
public:
    char name[100];
    int model;
    char color;
    int year;
    Car(int m, int y, int c, char *n)
    {
        model = m;
        year = y;
        color = c;
        strcpy(name, n);
    }
};
int main()
{
    char name[100] = "BMW";
    Car *vehical = new Car(1195, 'Black', 2022, name);
    cout << vehical->name << endl;
    return 0;
}