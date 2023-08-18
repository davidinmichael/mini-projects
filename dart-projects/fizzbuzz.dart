import 'dart:io';

void main() {
  stdout.write("Enter the start number: ");
  var startNum = int.parse(stdin.readLineSync()!);
  stdout.write("Enter the end number: ");
  var endNum = int.parse(stdin.readLineSync()!);
  
  for (var start = startNum; start <= endNum; start++) {
    if (start % 3 == 0 && start % 5 == 0) {
      stdout.write("FizzBuzz ");
    } else if (start % 3 == 0) {
      stdout.write('fizz ');
    } else if (start % 5 == 0) {
      stdout.write("buzz ");
    } else {
      stdout.write("$start ");
    }
  }
}
