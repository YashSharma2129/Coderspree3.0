import java.util.*;
public class Solution{
    static class Stack {
        ArrayList<Integer> myStack;
        int stackSize;
        int n;
            Stack(int n) {
            myStack = new ArrayList<Integer>(n);
            for (int i = 0; i < n; i++) {
                myStack.add(0);
            }
            stackSize = -1;
            this.n = n;
        }

        public void push(int num) {
            if (stackSize != n - 1) {
                ++stackSize;
                myStack.set(stackSize, num);
            }
        }
        public int pop() {
            if (stackSize != -1) {
                --stackSize;
                return myStack.get(stackSize + 1);
            } else {
                return -1;
            }
        }
        public int top() {
            if (stackSize != -1) {
                return myStack.get(stackSize);
            } else {
                return -1;
            }
        }
        public int isEmpty() {
            if (stackSize != -1) {
                return 0;
            } else {
                return 1;
            }
        }
        public int isFull() {
            if (stackSize != n - 1) {
                return 0;
            } else {
                return 1;
            }
        }
    }
}