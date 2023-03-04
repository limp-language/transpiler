#pragma once

#include <memory>

namespace limp::types {
    template<typename Alloc>
    class String;

    template<typename Type>
    class IType {
    public:
        virtual String<typename Type::Allocator> ToString() = 0;
        virtual Type Copy() = 0;
    protected:

    private:

    };

}
