//===============================================================
// ** Connectivity Checker
//---------------------------------------------------------------
// Main program file that reads in user input for a graph and
// tells you if the graphic is connected or not
//===============================================================
#include <iostream>
using namespace std;

//---------------------------------------------------------------
// * Function Prototypes
//---------------------------------------------------------------
bool checkDirected(const int** matrix, const int size);
bool checkGraph(const int** matrix, const int size);

//---------------------------------------------------------------
// * Main Process
//---------------------------------------------------------------
int main() {
	// Get the size of the maxtix
	int size = -1;
	cout << "Enter the number of nodes in the graph: ";
	while (size < 1) {
		cin >> size;
		if (size < 1) {
			cout << "Size cannot be less than 1. Please enter a valid size: ";
		}
	}
	int** adjacencyMatrix = new int*[size];
	for (int i = 0; i < size; i++) {
		adjacencyMatrix[i] = new int[size];
	}

	// Take in the adjacency matrix
	for (int i = 0; i < size; i++) {
		cout << "Enter row " << i + 1 << " of the matrix: ";
		for (int j = 0; j < size; j++) {
			cin >> adjacencyMatrix[i][j];
		}
	}

	// Prepare for program termination
	for (int i = 0; i < size; i++) {
		delete adjacencyMatrix[i];
	}
	delete adjacencyMatrix;
	return 0;
}

//---------------------------------------------------------------
// * Check the Graph and Return if it is Directed
//---------------------------------------------------------------
bool checkDirected(const int** matrix, const int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				// The graph is directed
				return true;
			}
		}
	}
	// The graph is undirected
	return false;
}

//---------------------------------------------------------------
// * Check the Graph and Return if it is Connected
//---------------------------------------------------------------
bool checkGraph(const int** matrix, const int size) {
	if (checkDirected(matrix, size)) {

	} else {

	}
}