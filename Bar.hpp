#pragma once

// Forward declaration
template<class T>
class Foo;

template<class T>
class Bar {
private:
  T x_;
public:
  Bar( T x ) : x_(x) {}
  T add( T val ) const { 
    return x_+val;
  }
  T applyFoo( const Foo<T>& foo ) const {
    return foo.times(x_);
  }
};
