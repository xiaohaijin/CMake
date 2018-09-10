#include <iostream>

#include "boost/atomic.hpp"
#include "boost/progress.hpp"

int main(int argc, char *argv[])
{
  boost::progress_display pid(1000);

  boost::atomic<bool> b(1);
  return 0;
}
