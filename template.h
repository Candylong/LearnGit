#include <iostream>
#include <string>
template <typename T>
int sum(const T& a, const T& b) {
    std::cout<< "call const T& a"<<std::endl;
    return a + b;
}

template <typename T>
int sum(T& a, T& b) {
    std::cout<< "call T& a"<<std::endl;
    return a + b;
}

template <class T1, class T2>
class Test {
public:
  Test(T1* t1, T2* t2) {
    value_ = t1;
    t_ = t2;
  }    
private:
  T1* value_;
  T2* t_;
};

// template <>
// class Test<int> {
// public:
//   Test(int* t1) {
//     value_ = t1;
//   }    
// private:
//   int* value_;
// };
template <class T2>
class Test<const int, T2> {
public:
  Test(const int* t1, T2* t2) {
    value_ = t1;
    t_ = t2;
  }    
private:
  const int* value_;
  T2* t_;
};

int StringsToInt(const std::string& value) {
  int ret = 0;
  for(const auto& i: value) {
    if(!std::isdigit(i)) {
      return -1;
    }
  }

  try {
    ret = std::stoi(value);
  } catch (...) {
    printf("std::stoi catch exception!");
  }
  return ret;
}
