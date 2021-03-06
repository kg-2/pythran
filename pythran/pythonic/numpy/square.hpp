#ifndef PYTHONIC_NUMPY_SQUARE_HPP
#define PYTHONIC_NUMPY_SQUARE_HPP

#include "pythonic/include/numpy/square.hpp"

#include "pythonic/utils/numpy_traits.hpp"
#include "pythonic/utils/functor.hpp"

#ifdef USE_GMP
#include "pythonic/types/long.hpp"
#endif

namespace pythonic
{

  namespace numpy
  {

#define NUMPY_NARY_FUNC_NAME square
#define NUMPY_NARY_FUNC_SYM wrapper::square
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
