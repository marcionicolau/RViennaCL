#ifndef __RVIENNACL_H__
#define __RVIENNACL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <Rcpp.h>
using namespace Rcpp;

// include necessary system headers
//
#include <iostream>

//
// ViennaCL includes: We only need the qr-header
//
#include "viennacl/linalg/qr.hpp"

//
// Boost includes
//
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>


//
// Testing
//
#include "viennacl/range.hpp"
#include "viennacl/linalg/prod.hpp"
#include "viennacl/matrix.hpp"
#include "viennacl/matrix_proxy.hpp"


typedef double               ScalarType;     //feel free to change this to 'double' if supported by your hardware
typedef boost::numeric::ublas::matrix<ScalarType>        MatrixType;
typedef viennacl::matrix<ScalarType, viennacl::column_major>        VCLMatrixType;
typedef viennacl::vector<ScalarType>        VCLVectorType;


#ifdef __cplusplus
}
#endif

#endif /* __RVIENNACL_H__ */