#pragma once

// Forward declaration
template<class T> 
class Bar;

template<class T>
class Foo {
private:
  T x_;
  T times(T val) const { 
    return x_*val;
  }
public:
  Foo(T x) : x_(x) {}
  T applyBar(const Bar<T>& bar) {
    return bar.add(x_);
  }

  template<class U> 
  friend class Bar;
};
