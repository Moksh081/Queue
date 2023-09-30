 // circular queue
  /*
  #include<iostream>
  using namespace std;
  class queue{
  	private:
  	int size;
  	int front;
  	int rear;
  	int *Q;
  	public:
  		queue(int size);
  		~queue();
  		void display();
  		int enqueue(int x);
  		void dequeue();
  		bool isEmpty();
  		bool isFull();
  };
  queue :: queue(int size){
  	this->size = size;
   front = 0;
    rear = 0;
    Q = new int [size];
}
 
 queue::~queue() {
    delete [] Q;
 }
 int queue :: enqueue(int x){
 	if((rear+1)%size == front){
 		cout<<"Overflow"<<endl;
	 }else{
	 	rear = (rear+1)%size;
	 	Q[rear] = x;
	 }
 }
 void queue :: dequeue(){
 	if(front == rear){
 		cout<<"empty"<<endl;
	 }else{
	 	front++;
	 	int x = Q[front];
	 	cout<<x <<" is deleted from queue"<<endl;
	 }
 }
 bool queue :: isFull(){
 	if((rear+1)%size == front){
 		true;
	 }else{
	 	false;
	 }
 }
 bool queue :: isEmpty(){
 	if(front == rear){
 		true;
	 }else{
	 	false;
	 }
 }
  void queue::display() {
    for (int i=front+1; i<=rear; i++){
        cout << Q[i] << flush;
        if (i < rear){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    queue q(sizeof(A)/sizeof(A[0]));
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }
 
    // Display
    q.display();
 
    // Overflow
    q.enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
 
    // Underflow
    q.dequeue();
    q.isEmpty();
    q.isFull();
    
    return 0;
}
*/

