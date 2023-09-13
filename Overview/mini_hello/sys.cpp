#include <sys/syscall.h>
#include <iostream>


int main(){
	std::cout<< SYS_write<< std::endl;
	std::cout<< SYS_exit<< std::endl;
}
