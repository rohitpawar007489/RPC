typedef string str_t<255>;

struct my_string {
    str_t data;
};

struct my_integer_one_dimensional_array {
	int size;
    int data[100];
};

struct my_integer_two_dimensional_array {
	int row;
	int column;
    int data[100];
};

struct matrix_multiplication_input{
	my_integer_two_dimensional_array matrix1;
	my_integer_two_dimensional_array matrix2;
};

program Interface{
	version Interface_Version{
		my_string pwd_command_to_retrieve_path() = 1;
		my_integer_one_dimensional_array sort(my_integer_one_dimensional_array) = 2;
		my_string echo_client(my_string) = 3;
		my_string check_file_exist(my_string) = 4;
		my_integer_two_dimensional_array MatrixMultiplication(matrix_multiplication_input) = 5;
	} = 1;
} = 0x31111111;
