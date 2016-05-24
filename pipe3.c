/* pipe3.c		
// Jake Stocker
// Systems Programming
// 4/9/2016
// type make at command line to compile
 */
/*  popen.c -  a version of the Unix popen() library function
 *	FILE *popen( char *command, char *mode )
 *		command is a regular shell command
 *		mode is "r" or "w" 
 *		returns a stream attached to the command, or NULL
 *		execls "sh" "-c" command
 *    todo: what about signal handling for child process?
 */
#include	<stdio.h>
#include	<signal.h>
#include    <stdlib.h>
#include    <unistd.h>
#include    <string.h>


#define	READ	0
#define	WRITE	1

main(int argc, char* argv[])
{
	FILE *popen_fp;
	char *result = malloc(strlen(argv[1])+strlen(argv[2])+strlen(argv[3]) + 1);
	strcpy(result, argv[1]);
	strcat(result, "|");
    strcat(result, argv[2]);
	strcat(result, "|");
	strcat(result, argv[3]);
	
	
	popen_fp = popen(result, "w");
	pclose(popen_fp);
	
		
		
		

    return(0);
		
}