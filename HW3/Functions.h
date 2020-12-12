  
#include <stdio.h>
#include <stdlib.h>
#ifndef __Hard_coded_data 
#define __Hard_coded_data 
#include "HardCodedData.h"
#include <Windows.h>

#endif
///our code- EX 3

void printByFormat(int number, char* prime_factors_by_format);
void FormatNumberString(int* prime_components, char* OUT prime_factors_by_format, int number_of_components);
int FindPrimeComponets(int prime, int* OUT prime_components);

<<<<<<< HEAD
///
void CheakArgs(int argc);
=======
void CheakArgs(int argc,int excepted_num_of_args);
>>>>>>> 8ce8ee54f352a474e3a71ff9ad1902df3236f732
/*This function cheak if string is a number - used for validate the value of key in this code */
BOOL CheakIsAnumber(char* str);
/*input: pointer
checks if the pointer is valid. if not it exists with the relevant error.
*/
int valid_PTR(void*);

//------------------files--------------------

/*the function is a wrap of the createfileA function it gets as an input the file name and the mode,
it returns the handle of the opened file*/
int OpenFileWrap(LPCSTR str, DWORD mode, HANDLE* OUT hFile);

/*A wrap to the readfilefunction, gets as an input Handle of a file, it's length and the buffer as well
if it does not manage to read it exits with the last error*/
int ReadFileWrap(DWORD len, HANDLE file, char* my_file_buff);

// set EOF at the end of the input file 
int SetEndOfFileWarp(LPCSTR output_path, uli end_pos, DWORD mode);

/*A wrap for the setfilepointer function. the function gets as an input the handle of the file,
and it moves the file pointer by "pos" bytes acording to the mode given as an input */
int SetFilePointerWrap(HANDLE input_file, uli pos, DWORD mode);

/*A wrap if the writefile function, it gets as an input handle of a file,buffer, and the amount of bytes to write
if does not manage to write, it exits with the last error*/
int WriteFileWrap(HANDLE hFile, LPCVOID  lpBuffer, DWORD  nNumberOfBytesToWrite);

/*return the  number of line in file  and the places in the file of each  end of line */
int read_number_of_line_and_end_of_lines(HANDLE file, PDWORD OUT num_of_lines_out,  OUT uli** p_end_of_lines);




//--------------------------aray and and handles ------------------------


//cheack if alloction of memory succeded if not return correspnding error code 
int  CheckAlocation(void* p_arr);
//cheack if  HANDLE IS VALID IF  not return correspnding error code 
int CheakHandle(HANDLE my_handle);

/*A wrap of the closehandle , it get as an input the handle of the file and close it,
if it does not manage to close , it exits with last error*/
int CloseHandleWrap(HANDLE file);

/* input: array of allocated memories, the function runs
over the array and it dealocate it
*/
int FreeArray(void** arr, int len);

/*input: array of handles and it's length,
the function closes the handles in the array, if not it exit with LastError.
*/
int FreeHandelsArray(HANDLE* handels, int len);


//------------------process and threads 



//Warp for signaleobject if not succed return correspnding error code 
int WaitForSingleObjectWrap(HANDLE handle, uli time_ms);
//Warp for WaitForMultipleObjectsWra if not succed return correspnding error code 
int WaitForMultipleObjectsWrap(uli num_of_threads, HANDLE* handle_arr, uli time_ms, BOOL bWaitAll);
//------------------semphoros and mutex-- 
//Warp for  CreateSemphore if not succed return correspnding error code 
int CreateSemphoreWrap(int max_count,HANDLE * OUT semphore , int initialcount);
//Warp for  CreateMutex if not succed return correspnding error code 
int CreateMutexWrap(BOOL bInitialOwner, HANDLE* OUT mutex);
//Warp for  OpenSemphore if not succed return correspnding error code 
int OpenSemphoreWrap( HANDLE * OUT semphore, const char* name);
int ReleaseSemphoreWrap(HANDLE semphore, int lReleaseCount);

int ReleaseMutexeWrap(HANDLE mutex);










//memory mengment 
//int setup_memory_menagment(memorytracker* out memtracker);
//int push_element_memory_mangment(memorytracker*  memtracker, memorytracker element);
//int freeall(memorytracker * memory_traker);







