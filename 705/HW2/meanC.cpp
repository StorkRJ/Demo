#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double meanC(NumericVector x) {
  int n = x.size();
  double total = 0;

  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}


// [[Rcpp::export]]
double sdC(NumericVector x) {
  int n = x.size();
  double total = 0;

  double mean = meanC(x); 
  
  for(int i = 0; i < n; ++i) {
    total += pow(x[i] - mean, 2);
  }
  double sd = sqrt(total / (n - 1));
    
  return  sd ;
}

// [[Rcpp::export]]
double myCV(NumericVector x) {
  int n = x.size();
  double total = 0;
  
  double mean = meanC(x); 
  

  double sd = sdC(x);
  
  double CV = sd/mean;
  
  
  return  CV;
}

