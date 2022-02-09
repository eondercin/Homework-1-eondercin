#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return(theList.size() == 0);
    }
    const Object& getFront() const
    {
        return *theList.begin();
    }
    void enqueue(const Object& x)
    {
        theList.insert(theList.end(), x);
    }
    Object& dequeue()
    {
        Object temp = *theList.begin();
        theList.remove(theList.begin());
        return temp;
        //Dequeue time will never pass because my laptop is slow
    }
private:
    List<Object> theList;
};
