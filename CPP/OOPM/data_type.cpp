//Primitive Data Types
//Primary Data Types

//Byte Integer
byte int a;//

//Short Integer
short int a;

//Integer
int a;

//Long Integer
long int a;

//Unsigned Integer
unsigned int a;

//Unsigned Long Integer
unsigned long int a;

//Unsigned Short Integer
unsigned short int a;

//Character
char b;

//Wide Character
wchar_t g;

//Boolean
bool c;

//Floating
float d;

//Double Floating
double e;

//Void(Can only declare pointer)
void* f;
// or
void *f;

//Non-Primitive Data Types
//Derived Data Types

//Function
data_type function_name(data_type parameters){
    data_type variable;
    // logics and other things
}

//Array (Note:)
//1-D Array
data_type array_name[array_size];

//2-D Array
data_type array_name[array_size][array_size];

//3-D Array
data_type array_name[array_size][array_size][array_size];

//Pointer
data_type *variable;
//or
data_type* variable;

//Refrence
data_type &x;
//or
data_type& x;




//User-defined Data Type

//Class
class class_name{
    public:
        data_type data_member;
        data_type member_function;
    private:
        data_type data_member;
        data_type member_function;
    protected:
        data_type data_member;
        data_type member_function;
};

//Structure
struct struct_name{
    data_type data_member;
    data_type member_function;
};

//Union

//Enum

//Typedef