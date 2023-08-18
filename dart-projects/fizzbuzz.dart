import 'dart:io';

void main() {
  var startNum;
  for (startNum = 1; startNum <= 50; startNum++) {
    if (startNum % 3 == 0 && startNum % 5 == 0) {
      stdout.write("FizzBuzz ");
    } else if (startNum % 3 == 0) {
      stdout.write('fizz ');
    } else if (startNum % 5 == 0) {
      stdout.write("buzz ");
    } else {
      stdout.write("$startNum ");
    }
  }
}
