#pragma once

template<class T>
class IAggregate
{
public:
    virtual IIterator<T>* CreateIterator() = 0;
};
