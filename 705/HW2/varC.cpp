#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double varC(NumericVector x) {
  int n = x.size();
  double total = 0;

  double mean = meanC(x); 
  
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return  mean;
}
