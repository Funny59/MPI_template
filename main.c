#include "mpi.h" 
#include <stdlib.h> 

int main (int argc, char **argv) {  
	MPI_Init (&argc, &argv); 
	MPI_Comm_rank (MPI_COMM_WORLD, &myrank); 
	MPI_Comm_size(MPI_COMM_WORLD, &size); 
	//code here
	MPI_Finalize(); 
}