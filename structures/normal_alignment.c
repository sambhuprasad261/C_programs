#include <stdio.h>

//#pragma pack(push, 1)

	typedef struct __attribute__((packed)) s_t{
		
		short int A;
		char c;
		
	}st_t;
	
	//#pragma pack(pop)
	
	typedef struct s3_t{
		
		short int A;
		char c;
		int i;
		
	}s3t_t;
	
	typedef struct __attribute__((packed)) s2_t{
		
		char c;
		double d;
		int s;
		
	}s2t_t;
	
	typedef struct s4_t{
		
		double d;
		int s;
		char c;
		
	}s4t_t;

int main(){
	
	printf("The size of s1_t is %lu\n", sizeof(st_t));
	printf("The size of s2_t is %1u\n", sizeof(s2t_t));
	printf("The size of s3_t is %lu\n", sizeof(s3t_t));
	printf("The size of s4_t is %lu\n", sizeof(s4t_t));
	
	return 0;
}