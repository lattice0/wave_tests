#include <iostream>
#include <system_error>

#include "wave/file.h"

int main() {
  // read file's content
  wave::File read_file;
  wave::Error err = read_file.Open("sound.wav", wave::kIn);
  if (err) {
    std::cout << "Something went wrong in in open" << std::endl;
    return 1;
  }

  std::cout << "sample_rate: " << read_file.sample_rate() << std::endl;
  std::cout << "bits_per_sample: " << read_file.bits_per_sample() << std::endl;
  std::cout << "channel_number: " << read_file.channel_number() << std::endl;

  std::vector<float> content;
  err = read_file.Read(&content);
  if (err) {
    std::cout << "Something went wrong in read" << std::endl;
    return 2;
  }

  return 0;
}