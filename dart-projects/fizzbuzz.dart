void main() {
  var startNum;
  // var endNum = 50;
  for (startNum = 1; startNum <= 50; startNum++){
    if (startNum % 3 == 0 && startNum % 5 == 0){
      print("FizzBuzz");
    }
    else if (startNum % 3 == 0){
      print('fizz ');
    }
    else if (startNum % 5 == 0){
      print("buzz ");
    }
    else{
      print(startNum);
    }
  }

}