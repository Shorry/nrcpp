// ���������������� ��������� ����� - Limits.h


#ifndef _LIMITS_H_INCLUDE
#define _LIMITS_H_INCLUDE


// ----------------------------------------------------------------
// ������� ����������� ����� �� ���������
// ----------------------------------------------------------------

// ������ ��������� �� ���������
#define DEFAULT_POINTER_SIZE			4


// ������ ��������� �� ���� �� ���������
#define DEFAULT_POINTER_TO_MEMBER_SIZE	4


// ������ ������ �� ���������
#define DEFAULT_REFERENCE_SIZE			4


// ������ ������� �� ��������� (�����������)
#define DEFUALT_FUNCTION_SIZE			0


// ----------------------------------------------------------------
// ������� ������� ����� �� ���������
// ----------------------------------------------------------------

// ������ ���� void	(�����������)
#define	VOID_TYPE_SIZE					0


// ������ ���� bool
#define BOOL_TYPE_SIZE					1


// ������ ���� char
#define CHAR_TYPE_SIZE					1


// ������ ���� wchar_t
#define WCHAR_T_TYPE_SIZE				2


// ������ ���� int, ��� �������������
#define INT_TYPE_SIZE					4


// ������ ���� short int
#define SHORT_INT_TYPE_SIZE				2


// ������ ���� long int
#define LONG_INT_TYPE_SIZE				4


// ������ ���� float
#define FLOAT_TYPE_SIZE					4


// ������ ���� double ��� �������������
#define DOUBLE_TYPE_SIZE				8


// ������ ���� long double 
#define LONG_DOUBLE_TYPE_SIZE			8


// ������ ������������� ����
#define ENUM_TYPE_SIZE					4


// ������ ������� ������ �� ���������
#define EMPTY_CLASS_SIZE				4


// ----------------------------------------------------------------
// ����������� �� ���������� ��� ������� ������
// ----------------------------------------------------------------


// ������ ���-������� ����������� ������� ���������
#define	DEFAULT_NAMESPACE_HASHTAB_SIZE	111


// ������ ���-������� ���������� ������� ���������
#define DEFAULT_GLOBAL_HASHTAB_SIZE		513


// ������ ���-������� ��������� ������� ���������
#define DEFAULT_LOCAL_HASHTAB_SIZE		11


// ----------------------------------------------------------------
// ����������� �� ������������ � ����������� �������� �����
// ----------------------------------------------------------------


// ������������ �������� ��� char
#define MAX_CHAR_VALUE					255


// ������������ �������� ��� wchar_t
#define MAX_WCHAR_T_VALUE				65535


// ----------------------------------------------------------------
// ����������� ��������������� �� ����������� ���������
// ----------------------------------------------------------------

// ������������ ������ ����� �������
#define MAX_PARSER_STACK_DEEP			1024*3

// ������������ ����������� �����������
#define MAX_CONSTRUCTION_DEEP			256

// ������������ ���������� ������, ������� ����� �������
#define MAX_ERROR_COUNT					100

// ������������ ���������� ��������������
#define MAX_WARNING_COUNT				100

// ������������ ���������� �������� � ������
#define MAX_ITERATION_COUNT				100000

#endif	// end _LIMITS_H_INCLUDE
