#pragma once // Header guard to prevent multiple inclusions

class myclass
{
private:
    int x, y;

public:
    void get_value(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void display(void);
    myclass add(const myclass &obj1);
};
