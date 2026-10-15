#include <clocale>
#include <iostream>
#include <string>

<<<<<<< HEAD
int countIncreasingElement();

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int result = 0;

  try {
    result = countIncreasingElement();
    std::cout << "количество элементво больших предыдущего " << result << "\n";
    return 0;
  } catch (int error_code) {
    return error_code;
  }
}
=======
namespace koltsov {
>>>>>>> 97363d1 (initial commit)

int countIncreasingElement()
{
  int prev_num = 0;
  int curr_num = 0;
  int count = 0;

  const int err_invalid_input = 1;
<<<<<<< HEAD
  const std::string msg_invalid_input = "Входные данные не последовательность";
=======
  const std::string msg_invalid_input =
      "Входные данные не могут быть идентифицированы как последовательность.";
>>>>>>> 97363d1 (initial commit)

  if (!(std::cin >> prev_num)) {
    std::cerr << msg_invalid_input << "\n";
    throw err_invalid_input;
  }
<<<<<<< HEAD
  while (true) {
    if (!(std::cin >> curr_num)) {
      break;
    }
    if (curr_num > prev_num) {
      count += 1;
    }
    prev_num = curr_num;
  }
  return count;
}
=======

  if (prev_num == 0) {
    return 0;
  }

  while (true) {
    if (!(std::cin >> curr_num)) {
      std::cerr << msg_invalid_input << "\n";
      throw err_invalid_input;
    }

    if (curr_num == 0) {
      return count;
    }

    if (curr_num > prev_num) {
      count += 1;
    }

    prev_num = curr_num;
  }
}

}  // namespace koltsov

int main()
{
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int result = 0;

  try {
    result = koltsov::countIncreasingElement();
    std::cout << result << "\n";
    return 0;
  } catch (int error_code) {
    return error_code;
  }
}
>>>>>>> 97363d1 (initial commit)
