/*
Why do we need dynamic memory allocation? Explain with examples.

To undertand Why do we need dynamic memory allocation? first we have to figure out the problems of static memory allocation, if we diclare a value in static memory it will set a space for this value in stack memory, and after running the code this is not possible to change the value during run time. static memory only allow the memory whic is diclared before running the code. so if we need to change any value during running code this is not possible in static memory.

The second problem with static memory is if we make a function and set some value in it and call that from main function, after the 2nd function returns all value are errased from stack momory for the 2nd function.
for Example we make a function named run. diclare an array with some values and return it to main function. we will recive only the adress of first index of the array in main function, and if we try to read the value of the array we can't read that because the value are already errased from stack memory after 2nd function returns.

So sometimes we may need to change the value during run time, here is we need dynamic memory allocation.
if we diclare a variable in dynamic mamory it allocate the value in heap memory and this value can be changed during running the code.
for Example we diclare an array of size 3 first, then during running the code we need to increas 2 more index for the array, to solve this we can make a new array with the extra index and copy all the values from first array to 2nd array, then set the new values to remaning index, now we can work with the new 2nd array, but because the first array is taking a space we can delet that from heap memory to save some sapace.

Again if we want to recive an array from a function to main function, we can deiclare the array in heap memory so we can read the value even after the 2nd function will return.
for Example we diclare a function named fun(), diclare an array of 4 index, take input of values, and return the array to main function and print it.
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
int *fun()
{
    int *array = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    return array;
}
int main()
{
    int *array = fun();

    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}