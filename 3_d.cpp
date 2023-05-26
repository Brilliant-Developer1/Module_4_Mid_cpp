/*
Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.
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
class Person
{
public:
    char name[101];
    float height;
    int age;
    Person(char *n, float h, int a)
    {
        height = h;
        age = a;
        strcpy(name, n);
    }
};
int main()
{

    Person *random = new Person("Obaidullah", 5.4, 30);
    Person *random_2 = new Person("Abid", 5.6, 32);
    if (random->age < random_2->age)
    {
        cout << random_2->name;
    }
    else if (random->age > random_2->age)
    {
        cout << random->name;
    }

    // else
    // {
    //     cout << random->name;
    // }

    return 0;
}