
//Function that returns x^2
int pow2(int x) {
  //Your code here
  return x * x;
}

//Function that gives back the average of an array
float avg(float *a, int a_size) {
  //Your code here
 float sum = 0.0; // Initialize sum
  for (int i = 0; i < a_size; i++) {
    sum += a[i]; // Add each element to the sum
  }
  return sum / a_size; // Return the average
}
}

//Given a pointer, change the value that the pointer references to 42069
void changeX(int *x_p) {
  //Your code here
 *x_p = 42069; // Dereference and assign the new value
}

float getSlope(float x1, float y1, float x2, float y2) {
  if (x2 - x1 == 0) {
    return 0; // Avoid division by zero, return 0 if vertical line
  }
  return (y2 - y1) / (x2 - x1); // Return the slope
}

//CHALLENGE:
//Approximation of sqrt(x). Look up linear approximation or Newton's Method.
float squareRoot(float x) {
  //Your code here
   if (x < 0) return -1; // Return -1 for negative numbers
  float guess = x / 2.0; // Initial guess
  for (int i = 0; i < 10; i++) { 
    guess = (guess + x / guess) / 2.0; 
  }
  return guess; // Return the approximated square root
}

//CHALLENGE #2: look up bubble sort
void bubbleSort(int *a, int a_size) {
  //Your code here
   for (int i = 0; i < a_size - 1; i++) {
    for (int j = 0; j < a_size - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        // Swap if the current element is greater than the next
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void setup() {
  Serial.begin(9600);
  float testArray[9] = {1.2, 3.4, 5.4, 2.3, 2, 5, 7, 2, 69};
  int x = 0;
  int *x_p = &x;
  Serial.print("pow2(16): OUT: "); Serial.print(pow2(16)); Serial.println("ACTUAL: 256");
  Serial.print("avg(testArray, 9): OUT: "); Serial.print(avg(testArray, 9)); Serial.println("ACTUAL: 10.811111 (approx)");
  Serial.print("changeX(x_p): OUT: "); Serial.print(x); Serial.println("ACTUAL: 42069");
  //Make test cases for the rest of the functions
}

  void setup() {
  Serial.begin(9600);
  
  float testArray[9] = {1.2, 3.4, 5.4, 2.3, 2, 5, 7, 2, 69};
  int x = 0;
  int *x_p = &x;
  
  Serial.print("pow2(16): OUT: "); Serial.print(pow2(16)); Serial.println(" ACTUAL: 256");
  Serial.print("avg(testArray, 9): OUT: "); Serial.print(avg(testArray, 9)); Serial.println(" ACTUAL: 10.811111 (approx)");
  
  changeX(x_p); // Change the value pointed to by x_p
  Serial.print("changeX(x_p): OUT: "); Serial.print(x); Serial.println(" ACTUAL: 42069");
  
  // Example for getSlope
  float slope = getSlope(1.0, 2.0, 3.0, 4.0);
  Serial.print("getSlope(1, 2, 3, 4): OUT: "); Serial.print(slope); Serial.println(" ACTUAL: 1");

  // Example for squareRoot
  float sqrtResult = squareRoot(16);
  Serial.print("squareRoot(16): OUT: "); Serial.print(sqrtResult); Serial.println(" ACTUAL: 4");
  
  // Example for bubbleSort
  int arr[] = {5, 3, 8, 4, 2};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, arrSize);
  Serial.print("bubbleSort: OUT: ");
  for (int i = 0; i < arrSize; i++) {
    Serial.print(arr[i]);
    if (i < arrSize - 1) Serial.print(", ");
  }
  Serial.println(" ACTUAL: 2, 3, 4, 5, 8");
}
}

void loop() {
  //ignore

}
