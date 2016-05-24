Compile all files with make.

Extend pipe.c to handle three-part pipelines. Call the revised program pipe3.c. The new version should accept three program names as arguments and run them as a pipeline. The command
./pipe3 who sort head  
should have the same effect as
who | sort | head
Write a version of the remote directory assistance server finger called myfingerd.c that normally runs at port 79. On our servers this is disabled for remote access but can be used locally on the machine for example on wasp:
finger pfarrell
The client myfinger.c should accept two arguments, a username and a host name, such as:
myfinger pfarrell wasp.cs.kent.edu
and send the username through a socket to the server myfingerd. Note that you must run this at a high port number not 79. 
The server should accept the username as a single line of input, use popen to run the local version of finger and send the results back through the socket to the client. 
On receiving the results through the socket, the client should print them to standard out.
Due : Tuesday April 26, 2016 