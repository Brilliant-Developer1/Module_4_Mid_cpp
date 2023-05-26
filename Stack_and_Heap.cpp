/*
Stack and Heap memory.
1. Stack memory is compile time memory.
if we make any mistake during writing the code for example set the variable value without diclare the variable, or miss any clon, semiclon, first or second braccet in the code then the compiler will show a error massage for that mistak, before runnig the code.

2. Heap memory is Runtime memory.
if we make any mistake in logic of the code then the output will show a run time error, this error will show after running the code, this means there is no mistak in syntax but the logic of the code is wrong, there are several reasons for run time error, for example divion by zero, undefined object, logic error, negative index for an array etc.

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

    int a = 10 / 0;
    cout << a;
    return 0;
}