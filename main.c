#include "mpi.h" 
#include <stdlib.h> 
int myrank, size;

int main (int argc, char **argv) {  
	MPI_Init (&argc, &argv); 
	MPI_Comm_rank (MPI_COMM_WORLD, &myrank); 
	MPI_Comm_size(MPI_COMM_WORLD, &size); 
	
	printf("Hello form process №%d\n", myrank);
	
	MPI_Finalize(); 
	return 0;
}
