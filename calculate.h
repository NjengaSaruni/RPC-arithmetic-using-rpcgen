/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULATE_H_RPCGEN
#define _CALCULATE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int number1;
	int number2;
};
typedef struct numbers numbers;

#define CALCULATE 0x2fffffff
#define CALCULATE_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define add 1
extern  int * add_1(numbers *, CLIENT *);
extern  int * add_1_svc(numbers *, struct svc_req *);
#define subtract 2
extern  int * subtract_1(numbers *, CLIENT *);
extern  int * subtract_1_svc(numbers *, struct svc_req *);
#define multiply 3
extern  int * multiply_1(numbers *, CLIENT *);
extern  int * multiply_1_svc(numbers *, struct svc_req *);
#define divide 4
extern  float * divide_1(numbers *, CLIENT *);
extern  float * divide_1_svc(numbers *, struct svc_req *);
extern int calculate_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define add 1
extern  int * add_1();
extern  int * add_1_svc();
#define subtract 2
extern  int * subtract_1();
extern  int * subtract_1_svc();
#define multiply 3
extern  int * multiply_1();
extern  int * multiply_1_svc();
#define divide 4
extern  float * divide_1();
extern  float * divide_1_svc();
extern int calculate_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULATE_H_RPCGEN */
