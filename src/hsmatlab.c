/* a thin wrapper to add to the library to allow for arbitrary function calls */
LIB_libhsmatlab_C_API 
bool MW_CALL_CONV mlHsFeval(const char *fun, int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, fun, nlhs, plhs, nrhs, prhs);
}
