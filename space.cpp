int main() {
    
  double weight;
  int x;
  std::cout << "Please enter your weight: ";
  std::cin >> weight;
  
  std::cout << "Please enter the number of planet you wish to fight on: ";
  std::cin >> x;

  if (x==1) {
    weight = weight * 0.38;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==2) {
    weight = weight * 0.91;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==3) {
    weight = weight * 0.38;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==4) {
    weight = weight * 2.34;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==5) {
    weight = weight * 1.06;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==6) {
    weight = weight * 0.92;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else if (x==7) {
    weight = weight * 1.19;
    std::cout << "Your desired weight is " << weight << "\n";
  }
  else {
    std::cout << "Please enter a number from 1 to 7\n";
  }
}
