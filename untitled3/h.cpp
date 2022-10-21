void p(){
    int n = 1;
    label:
   std::cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
}
void prime() {
    int num, i, flag = 0;

    std::cout << "Enter a positive integer enter to check";
    std::cin >> num;

    for (i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        std::cout << num << " is not a prime number";
    } else {
        std::cout << num << " is a prime number";
    }
}