#include <iostream>

float checl(float n,float m){
    float val;
    if(n<m){
        std::cout<<"subtration: "<<m-n<<'\n';
        val = m-n;
    }
    else {
        std::cout<<"subtraction: "<<n-m<<'\n';
        val = n-m;
    };

    return val;
};

int main() {
    int x;
    int y;
    
    std::cout<<"x val?"<<'\n';
    std::cin>>x;
    std::cout<<"y val?"<<'\n';
    std::cin>>y;
    
    std::cout<<"x val = "<<x<<'\n';
    std::cout<<"y val = "<<y<<'\n';
    
    std::cout<<"addition = "<<x+y<<'\n';
    
    
    checl(x, y);
    return 0;
}