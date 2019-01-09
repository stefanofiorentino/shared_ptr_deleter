#include <iostream>
#include <memory>

struct my_type
{

};

int main()
{
    my_type mt;
    std::shared_ptr<my_type> mtp = std::make_shared<my_type>(mt);

    auto ptr = new std::shared_ptr<my_type>(mtp.get(), [](my_type*){});
    delete ptr;
    return 0;
}