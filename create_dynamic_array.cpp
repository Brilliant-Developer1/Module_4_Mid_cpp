/*
How to create a dynamic array? What are the benefits of it?

To create a dynamic array we have to allocate it to heap memory. to allocate an array to heap memory we have to initilize the array with pointer, then diclare the value with the keyword "new" and the type of the array then the index value in second brracate [].
Example:

Benefits:
By using dynamic array we can save space in memory, suppose we diclared a array with 5 index, later we need to increase the index with more 10 index, so we can create a new array with 15 index and copy all the value from 1st array to 2nd array and delete the 1st array to save space, now add new values to 2nd array.
Example:




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

int main()
{
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    int array_2[15];
    for (int i = 0; i < 5; i++)
    {
        array_2[i] = array[i];
    }

    delete[] array;

    for (int i = 5; i < 15; i++)
    {
        cin >> array_2[i];
    }
    for (int i = 0; i < 15; i++)
    {
        cout << array_2[i] << " ";
    }
    return 0;
}