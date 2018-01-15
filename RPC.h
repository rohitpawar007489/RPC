/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPC_H_RPCGEN
#define _RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef char *str_t;

struct my_string {
	str_t data;
};
typedef struct my_string my_string;

struct my_integer_one_dimensional_array {
	int size;
	int data[100];
};
typedef struct my_integer_one_dimensional_array my_integer_one_dimensional_array;

struct my_integer_two_dimensional_array {
	int row;
	int column;
	int data[100];
};
typedef struct my_integer_two_dimensional_array my_integer_two_dimensional_array;

struct matrix_multiplication_input {
	my_integer_two_dimensional_array matrix1;
	my_integer_two_dimensional_array matrix2;
};
typedef struct matrix_multiplication_input matrix_multiplication_input;

#define Interface 0x31111111
#define Interface_Version 1

#if defined(__STDC__) || defined(__cplusplus)
#define pwd_command_to_retrieve_path 1
extern  my_string * pwd_command_to_retrieve_path_1(void *, CLIENT *);
extern  my_string * pwd_command_to_retrieve_path_1_svc(void *, struct svc_req *);
#define sort 2
extern  my_integer_one_dimensional_array * sort_1(my_integer_one_dimensional_array *, CLIENT *);
extern  my_integer_one_dimensional_array * sort_1_svc(my_integer_one_dimensional_array *, struct svc_req *);
#define echo_client 3
extern  my_string * echo_client_1(my_string *, CLIENT *);
extern  my_string * echo_client_1_svc(my_string *, struct svc_req *);
#define check_file_exist 4
extern  my_string * check_file_exist_1(my_string *, CLIENT *);
extern  my_string * check_file_exist_1_svc(my_string *, struct svc_req *);
#define MatrixMultiplication 5
extern  my_integer_two_dimensional_array * matrixmultiplication_1(matrix_multiplication_input *, CLIENT *);
extern  my_integer_two_dimensional_array * matrixmultiplication_1_svc(matrix_multiplication_input *, struct svc_req *);
extern int interface_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define pwd_command_to_retrieve_path 1
extern  my_string * pwd_command_to_retrieve_path_1();
extern  my_string * pwd_command_to_retrieve_path_1_svc();
#define sort 2
extern  my_integer_one_dimensional_array * sort_1();
extern  my_integer_one_dimensional_array * sort_1_svc();
#define echo_client 3
extern  my_string * echo_client_1();
extern  my_string * echo_client_1_svc();
#define check_file_exist 4
extern  my_string * check_file_exist_1();
extern  my_string * check_file_exist_1_svc();
#define MatrixMultiplication 5
extern  my_integer_two_dimensional_array * matrixmultiplication_1();
extern  my_integer_two_dimensional_array * matrixmultiplication_1_svc();
extern int interface_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_str_t (XDR *, str_t*);
extern  bool_t xdr_my_string (XDR *, my_string*);
extern  bool_t xdr_my_integer_one_dimensional_array (XDR *, my_integer_one_dimensional_array*);
extern  bool_t xdr_my_integer_two_dimensional_array (XDR *, my_integer_two_dimensional_array*);
extern  bool_t xdr_matrix_multiplication_input (XDR *, matrix_multiplication_input*);

#else /* K&R C */
extern bool_t xdr_str_t ();
extern bool_t xdr_my_string ();
extern bool_t xdr_my_integer_one_dimensional_array ();
extern bool_t xdr_my_integer_two_dimensional_array ();
extern bool_t xdr_matrix_multiplication_input ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RPC_H_RPCGEN */
