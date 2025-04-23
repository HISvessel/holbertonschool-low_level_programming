#include <stdio.h>

void print_message(char *m)
{
	printf("%s\n", m); //the function that executes the printing of what is cotained

void execute_callback(void (*callback)(char *), char *message)
{
	callback(message); // The pointer to the function that prints
}

int main()
{
	char *message = "Jesus, the path, the way and the life"; // Message to print
	char *m = "Come to me all who are weary, and I will give you rest"; // Another message to print

	execute_callback(print_message, m); //calling the function with the pointer
	execute_callback(print_message, message);
		return 0;
}
