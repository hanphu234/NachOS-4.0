#include "syscall.h"

int main() {
    PrintString("About us:\n");
    PrintString("20127007 Huynh Minh Chien\n");
    PrintString("20127591 Han Tho Nhat Phu\n");
    PrintString("20127653 Tran Nguyen Lan Trinh\n\n");
    PrintString("ASCII: at directory code, run build.linux/nachos -x test/ascii to print the ASCII table\n");
    PrintString("Sort: at directory code, run build.linux/nachos -x test/bubblesort to start the sort program\n");
    PrintString("\t- Enter n (the length of the array, 0 <= n <= 100)\n");
    PrintString("\t- Enter n elements of the array\n");
    PrintString("\t- Enter the order you want to sort the array with (1: increasing, 2: decreasing)\n");
    PrintString("\t- The program will print out the sorted array and then exit\n");
    Halt();
}
