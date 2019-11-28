// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// polygonArea
double polygonArea(NumericVector X, NumericVector Y);
RcppExport SEXP _SHUDtoolbox_polygonArea(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(polygonArea(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// rowMatch
LogicalVector rowMatch(NumericVector x, NumericMatrix m);
RcppExport SEXP _SHUDtoolbox_rowMatch(SEXP xSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rowMatch(x, m));
    return rcpp_result_gen;
END_RCPP
}
// triTopology
NumericMatrix triTopology(NumericMatrix tri);
RcppExport SEXP _SHUDtoolbox_triTopology(SEXP triSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tri(triSEXP);
    rcpp_result_gen = Rcpp::wrap(triTopology(tri));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SHUDtoolbox_polygonArea", (DL_FUNC) &_SHUDtoolbox_polygonArea, 2},
    {"_SHUDtoolbox_rowMatch", (DL_FUNC) &_SHUDtoolbox_rowMatch, 2},
    {"_SHUDtoolbox_triTopology", (DL_FUNC) &_SHUDtoolbox_triTopology, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SHUDtoolbox(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
