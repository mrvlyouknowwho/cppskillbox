#include <iostream>
#include <cmath>
int main()
{
  float a, b, c;
  std::cout << "a, b, c:";
  std::cin >> a >> b >> c;
  if (a < 0)
  {
    std::cout << "Not a quadratic equation!" << std::endl;
  }
  else if (b > 0)
  {
    float discriminant = pow(b,2) - 4 * (a * c);
    if (discriminant > 0)
    {
        float x1 = (-b + std::sqrt(pow(b,2) - 4 * (a*c))) / (2  * a);
        float x2 = (-b - std::sqrt(pow(b,2) - 4 * (a*c))) / (2  * a);
        std::cout  << "Root 1, 2: " << x1 << ", " << x2 << std::endl;
    }
    else if (discriminant == 0)
    {
        float x = -b / (2*a);
        std::cout << "Root: " << x << std::endl;
    }
    else
    {
        std::cout << "Complex scenario is not supported!" << std::endl;
    }
  }
    return 0;
}
