#include<iostream>
using namespace std;
#include"sort.cpp"
//start of TYPES of sort
#include"selection.cpp"
#include"Merge.cpp"
#include"Insertion.cpp"
#include"Heap.cpp"
#include"Bubble.cpp"
//end of TYPES of sort
//Intermediary class for STRATEGY DESIGN PATTERN
#include"Intermediary.cpp"

int main(){
	int array_variables[]= {1,2,4,5,6,8,7,9};
	//new instance of INTERMEDIARY with HEAP object as a member_variable
	Intermediary* inter_mediary_heap= new Intermediary(new Heap());
	//calls the function in the HEAP CLASS
	inter_mediary_heap->arrange_elements(array_variables);

	//new instance of INTERMEDIARY with BUBBLE object as a member_variable
	Intermediary* inter_mediary_bubble= new Intermediary(new Bubble());
	//calls the function in the BUBBLE CLASS
	inter_mediary_bubble->arrange_elements(array_variables);	
	return 0;
}
