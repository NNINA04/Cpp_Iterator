#pragma once

template<class T, size_t size>
class Array;

template<class T, size_t size>
class ArrayIterator
    : public IIterator<T>
{
    int _currentStep = 0;

    Array<T, size>* _array;
public:
    ArrayIterator(Array<T, size>* array)
        : _array(array) {}

    virtual bool HasNext() override
    {
        return _currentStep != size;
    }

    virtual T& Next() override
    {
        return _array->operator[](_currentStep++);
    }
};
