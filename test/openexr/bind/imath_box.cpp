#include <OpenEXR/ImathBox.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

// I don't think we actually need the matching namespace structure any more
// since we're using the type aliases on the classes as "type pointers"
namespace IMATH_INTERNAL_NAMESPACE {

namespace Imath = ::IMATH_INTERNAL_NAMESPACE;

template <class V> class Box {
public:
    // This allows us to see through to the type in Imath
    using BoundType = Imath::Box<V>;

} CPPMM_VALUETYPE;

template class Box<Imath::Vec2<short>>;
template class Box<Imath::Vec2<int>>;
template class Box<Imath::Vec2<float>>;
template class Box<Imath::Vec2<double>>;

using Box2s = Imath::Box2s;
using Box2i = Imath::Box2i;
using Box2f = Imath::Box2f;
using Box2d = Imath::Box2d;

template class Box<Imath::Vec3<short>>;
template class Box<Imath::Vec3<int>>;
template class Box<Imath::Vec3<float>>;
template class Box<Imath::Vec3<double>>;

using Box3s = Imath::Box3s;
using Box3i = Imath::Box3i;
using Box3f = Imath::Box3f;
using Box3d = Imath::Box3d;

} // namespace IMATH_INTERNAL_NAMESPACE
} // namespace cppmm_bind

template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<short>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<int>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<float>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<double>>;

template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<short>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<int>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<float>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<double>>;