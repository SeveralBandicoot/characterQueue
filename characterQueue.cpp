/*

Character Queue

11/07/24

@ AJ Enrique Arguello 

Objectives: 
    Create a Character Queue and push the letters a,b,c & d on to the Queue. 

    Create a Display( ) Function that will display the values of the Queue. Note that this should solve the Empty Queue problem.

    Use the pop command and then redisplay the letters. which letter was removed?

    How does this compare with a Stack?

*/

#include <iostream>
#include <queue>

using namespace std;

void display(queue<char> charQueue);
int main() {
    queue<char> charQueue;

    charQueue.push('a');
    charQueue.push('b');
    charQueue.push('c');
    charQueue.push('d');

    //charQueue.pop();
    
    display(charQueue);

    return 0;
}

void display(queue<char> charQueue) {
    while(!charQueue.empty()) { // while charQueue is not empty 
        cout << charQueue.front() << endl;
        charQueue.pop();
    }
}