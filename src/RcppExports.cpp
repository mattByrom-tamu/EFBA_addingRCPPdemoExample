// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// msboot
Rcpp::List msboot(int nrep, arma::mat x, int Wsel, bool stdz, int ncore);
RcppExport SEXP _EFBA_msboot(SEXP nrepSEXP, SEXP xSEXP, SEXP WselSEXP, SEXP stdzSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type Wsel(WselSEXP);
    Rcpp::traits::input_parameter< bool >::type stdz(stdzSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(msboot(nrep, x, Wsel, stdz, ncore));
    return rcpp_result_gen;
END_RCPP
}
// tsbootH0
arma::mat tsbootH0(arma::mat x, arma::mat rndraws, int ncore);
RcppExport SEXP _EFBA_tsbootH0(SEXP xSEXP, SEXP rndrawsSEXP, SEXP ncoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rndraws(rndrawsSEXP);
    Rcpp::traits::input_parameter< int >::type ncore(ncoreSEXP);
    rcpp_result_gen = Rcpp::wrap(tsbootH0(x, rndraws, ncore));
    return rcpp_result_gen;
END_RCPP
}
// fhat
arma::cx_cube fhat(arma::mat X, int N, bool stdz);
RcppExport SEXP _EFBA_fhat(SEXP XSEXP, SEXP NSEXP, SEXP stdzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< bool >::type stdz(stdzSEXP);
    rcpp_result_gen = Rcpp::wrap(fhat(X, N, stdz));
    return rcpp_result_gen;
END_RCPP
}
// ghat
arma::cx_cube ghat(arma::cx_cube fhat);
RcppExport SEXP _EFBA_ghat(SEXP fhatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cx_cube >::type fhat(fhatSEXP);
    rcpp_result_gen = Rcpp::wrap(ghat(fhat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EFBA_msboot", (DL_FUNC) &_EFBA_msboot, 5},
    {"_EFBA_tsbootH0", (DL_FUNC) &_EFBA_tsbootH0, 3},
    {"_EFBA_fhat", (DL_FUNC) &_EFBA_fhat, 3},
    {"_EFBA_ghat", (DL_FUNC) &_EFBA_ghat, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_EFBA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
