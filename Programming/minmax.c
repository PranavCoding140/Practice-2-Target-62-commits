//implement minmax algorithm in C.
#include <stdio.h>
#include <stdbool.h>

// Helper macro to find maximum and minimum of two values
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

/**
 * Recursive Minimax function
 * @param depth Current depth in the game tree
 * @param nodeIndex Index of the current node in the scores array
 * @param isMax True if it's the Maximizer's turn, False if Minimizer's turn
 * @param scores Array containing the evaluations of the leaf nodes
 * @param targetDepth The depth where leaf nodes are located
 */
int minimax(int depth, int nodeIndex, bool isMax, int scores[], int targetDepth) {
    // Base Case: Target depth reached (Leaf node)
    if (depth == targetDepth) {
        return scores[nodeIndex];
    }

    // If it's the Maximizer's turn
    if (isMax) {
        return MAX(minimax(depth + 1, nodeIndex * 2, false, scores, targetDepth),
                   minimax(depth + 1, nodeIndex * 2 + 1, false, scores, targetDepth));
    } 
    // If it's the Minimizer's turn
    else {
        return MIN(minimax(depth + 1, nodeIndex * 2, true, scores, targetDepth),
                   minimax(depth + 1, nodeIndex * 2 + 1, true, scores, targetDepth));
    }
}

int main() {
    // A complete binary game tree with 8 leaf nodes (depth = 3)
    int scores[] = {3, 5, 2, 9, 12, 5, 23, 23};
    int n = sizeof(scores) / sizeof(scores[0]);
    
    // For a binary tree, depth = log2(n). 
    // For 8 elements, the target depth is 3.
    int targetDepth = 3; 

    printf("The game tree leaf nodes are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    // Start the algorithm at depth 0, root index 0, with the Maximizer's turn
    int optimalValue = minimax(0, 0, true, scores, targetDepth);

    printf("The optimal value achieved by Maximizer is: %d\n", optimalValue);

    return 0;
}
