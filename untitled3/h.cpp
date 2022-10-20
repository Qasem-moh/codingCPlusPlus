void p(){
    int n = 1;
    label:
   std::cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
}