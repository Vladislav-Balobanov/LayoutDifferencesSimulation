#ifndef BASE_H
#define BASE_H

 #include <iostream>

namespace Base
{
    class base
    {
    public:
        void Do()
        {
            std::cout << "Method 'Base::Do' by version '1' completed his work with the result: " << a << ' ' << b << std::endl;
        }
    private:
        int a = 10;
        int b = 20;            
    };
}

#endif /* BASE_H */
