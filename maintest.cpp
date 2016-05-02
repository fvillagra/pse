#include <serial.h>
#include <stdio.h>
int main()
{
	CircBuf buffer(4);
	buffer.add('a');
	buffer.add('b');
	buffer.add('c');
	buffer.add('2');
	
	printf("%c\n",buffer.remove());
	printf("%c\n",buffer.remove());
	printf("%c\n",buffer.remove());
	printf("%c\n",buffer.remove());
	//buffer.add('p');
	//buffer.add('q');
	//buffer.add('r');
	//buffer.add('7');
	//printf("%c\n",buffer.remove());
	//printf("%c\n",buffer.remove());
	//printf("%c\n",buffer.remove());
	//printf("%c\n",buffer.remove());
}
