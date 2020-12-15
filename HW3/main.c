
#include "HardCodedData.h"
#include "Functions.h"
#include "ThreadFuncs.h"
#include "Lock.h"
#include "queue.h" 
#include <vld.h>
int main(int argc, char* argv[])
{
	
	CheakArgs(argc, 5);
	char* priority_path = argv[2];
	int ret_val1 = 0;
	int ret_val2 = 0;
	int check_initialization_return_value = 0;
	HANDLE input_file;
	ret_val1 = CheakIsAnumber(argv[3]);
	ret_val2 = CheakIsAnumber(argv[4]);

	if (ret_val1 == FALSE || ret_val2 == FALSE)
	{
		printf("num of lines or num of threads is not a number  :(");
		return NOT_A_NUMBER;
	}
	unsigned int num_of_lines = atoi(argv[3]);
	uli num_of_threads = atoi(argv[4]);
	Queue* TasksPoistions;
	ret_val1 = InitializeQueue(num_of_lines, &TasksPoistions);
	//check_initialization_return_value = checkInitializeQueue(TasksPoistions, ret_val1);//this function checks the InitializeQueue function and manages the memory
	if (ret_val1 != SUCCESS)
		return ret_val1;
	ret_val1 = OpenFileWrap(priority_path, OPEN_EXISTING, &input_file);
	if (ret_val1 != SUCCESS) {
		printf("error with opening file %d\n", GetLastError());
		ret_val1 = destroy_queue(&TasksPoistions);// what is that value helps us to have the value of ret_val1?
		return FAILAD_TO_OPEN_FILE;
		//return ret_val1;
	}
	ret_val1 = fill_fifo(TasksPoistions, input_file, num_of_lines);
	if (ret_val1 != SUCCESS) {
		destroy_queue(&TasksPoistions);
		CloseHandleWrap(input_file);
		return ret_val1;
	}
	Lock* lock;
	ret_val1 = InitializeLock(num_of_lines, &lock);
	if (ret_val1 != SUCCESS) {
		destroy_queue(&TasksPoistions);
		CloseHandleWrap(input_file);
		return ret_val1;
	}
	parssing_data params = { TasksPoistions ,argv[1],num_of_threads ,lock };
	ret_val1 = Createmultiplethreads(&params, num_of_threads);
	if (ret_val1 != SUCCESS) {
		destroy_queue(&TasksPoistions);
		CloseHandleWrap(input_file);
		DestroyLock(&lock);
		return ret_val1;
	}
	destroy_queue(&TasksPoistions);
	CloseHandleWrap(input_file);
	DestroyLock(&lock);
	return SUCCESS;
}


//int tests() {
//
//}