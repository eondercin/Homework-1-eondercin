#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return(theList.size() == 0);
    }
    const Object& top() const
    {
        return *theList.begin();
    }
    void push(const Object& x)
    {
        theList.insert(theList.begin(), x);
    }
    Object& pop()
    {
        Object temp = *theList.begin();
        theList.remove(theList.begin());
        return temp;
    }
private:
    List<Object> theList;
};