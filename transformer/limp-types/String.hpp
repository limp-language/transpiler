#pragma once

#include "IType.hpp"

#include <string>

namespace limp::types {

    template<typename Alloc = std::allocator<char>>
    class String : public IType<String<Alloc>> {
    public:
        using Allocator = typename std::allocator_traits<Alloc>::template rebind_alloc<char>;


    private:
        std::string data_;
    };

}

