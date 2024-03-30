#pragma once

template<class T, size_t size>
class Array
    : public IAggregate<T>
{
    std::array<T, size>* _stdArray;
public:
    Array(std::array<T, size>* stdArray)
        : _stdArray(stdArray) {}

    virtual IIterator<T>* CreateIterator() override
    {
        return new ArrayIterator<T, size>(this);
    }

    T& operator[](const size_t index) // Concrete NOT ABSTRACT realization
    {
        return (*_stdArray)[index];
    }
};
