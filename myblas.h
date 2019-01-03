// AXPY operations
// Integer-based multiplication and addition
void iaxpy( int length, int a, int *X, int *Y, int *Result ); 

// DOT operations
// Single-precision multiplication
single fdot( int length, single *X, single *Y );

// GEMM
/* Double-precision matrix multiplication. Has multiplications, additions and ...
 * will stress the cache because of re-references of the same index.
 */
void dgemm ( int length, double *X, double *Y, double *Result );
