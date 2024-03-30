#include <iostream>
#include <array>

using namespace std;

#include "IIterator.h"
#include "IAggregate.h"

#include "ArrayIterator.h"
#include "Array.h"

/*
#include "ListIterator.h"
#include "List.h"

#include "MapIterator.h"
#include "Map.h"

#include "HashIterator.h"
#include "Hash.h"

.
.
.
*/

int main()
{
    std::array<int, 3>* stdArray = new std::array<int, 3>{1, 2, 3};

    Array<int, 3> arr(stdArray);
    IIterator<int>* it = arr.CreateIterator();

    while (it->HasNext())
        cout << it->Next() << endl;
}