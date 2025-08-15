#ifndef BASE_H
#define BASE_H

 #include <iostream>

#ifdef PROJ_DOMAIN
namespace PROJ_DOMAIN
{
#endif
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

#ifdef PROJ_DOMAIN
}
using namespace PROJ_DOMAIN;
#endif

#endif /* BASE_H */
