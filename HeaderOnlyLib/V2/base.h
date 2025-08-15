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
            std::cout << "Method 'Base::Do' by version '2' completed his work with the result: " << b << ' ' << a << std::endl;
        }
    private:
        int b = 20;            
        int a = 10;
    };
}

#endif /* BASE_H */
