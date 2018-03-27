# vijos
Solutions written in C++ for programming questionsons on [vijos.org](https://vijos.org).This is a CLion C++ project.

## structure
Each question is categorized by algorithm type, such as DP、NPC、KMP, and file name of solution is the question id in vijos.org system.

## lib
The commonly used header files are included together in `header.hpp`:
```c++
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <bitset>
```

## usage
Firstly, you should define your solution function and include `header.hpp` in hpp file, like `1025.hpp`:
```c++
#include "../../header.hpp"
void park_plan ();
```
Write code in cpp file, like `1025.cpp`:
```c++
#include "1025.hpp"
using namespace std;

void park_plan () {
    int tmp = 1;
    cout << ++tmp << endl;
    cout << "Here is the real solution" << endl;
}
```
Finally, change include file in `main.cpp` and run your function:
```c++
#include "DP/knapsack/1025.hpp"

int main() {
    park_plan();
    return 0;
}
```
