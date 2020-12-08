//ERROR NUMS 
#ifndef __HARD_CODED_DATA__ 
# define __HARD_CODED_DATA__  

typedef unsigned long int  uli;
#define TIMEOUT_IN_MILLISECONDS 5000
#define BRUTAL_TERMINATION_CODE 0x55
 

/// LENS 
#define  LEN_OF_SPACE_AND_EXIT_CODE 7
#define  ADDITION_LEN_TO_PATH 3
#define  MAX_LINE_LEN  50
#define	 START_ALLOCATION_SIZE 10 

enum ERRORS_ENUM {
	INVALID_NUMBER_OF_PARAMS,
	ERR_CODE_NOT_ENOUGH_ARGUMENTS,
	ERR_CODE_TOO_MANY_ARGUMENTS,
	INVALID_INPUT_PARM_EMPTY_POINTER,
	NOT_VALID_INPUT,
	NOT_A_NUMBER,
	FAILAD_TO_OPEN_FILE,
	FAILAD_TO_CLOSE_FILE,
	EMPTY_FILE,
	ERROR_READ_FILE,
	FAILED_WRITE_TO_FILE,
	FILE_IS_TOO_BIG,
	MEMORY_ALLOCATION_FAILURE,
	FAILED_CREATE_PROCESS,
	TIME_OUT_THREAD,
	PROBLEM_CRATE_SEMPHORE,
	PROBLEM_OPEN_SEMPHORE,
	ERROR_RELEASE_SEMPHORE,
	NOT_VALID_OPREATION,
	SUCCESS
};
enum opearation {
	DECRYPT,
	ENCRYPT,
	ERROR
};



//typedef enum {
//	ARRAY,
//	HANDLE
//}element_type ;
//typedef struct {
//	void* array_handle;
//	int count;
//	element_type type;
//}MemoryTrackerElement;

//typedef struct {
//	MemoryTrackerElement* array_tracker;
//	int count;
//	uli max_size  ;
//}MemoryTracker;


#endif
//#define MAX_LEN_OF_FOREST_STRING=