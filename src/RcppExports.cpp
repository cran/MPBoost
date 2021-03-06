// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mpboost
Rcpp::IntegerVector mpboost(int N1, int N2, int MTI);
RcppExport SEXP _MPBoost_mpboost(SEXP N1SEXP, SEXP N2SEXP, SEXP MTISEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N1(N1SEXP);
    Rcpp::traits::input_parameter< int >::type N2(N2SEXP);
    Rcpp::traits::input_parameter< int >::type MTI(MTISEXP);
    rcpp_result_gen = Rcpp::wrap(mpboost(N1, N2, MTI));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MPBoost_mpboost", (DL_FUNC) &_MPBoost_mpboost, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_MPBoost(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
