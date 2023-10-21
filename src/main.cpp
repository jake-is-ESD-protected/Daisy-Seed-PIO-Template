#include <daisy_seed.h>

daisy::DaisySeed hardware;

int main(void) {
  hardware.Init();

  bool led_state = true;
  while (true) {
    hardware.SetLed(led_state);
    led_state = !led_state;

    daisy::System::Delay(500);
  }
}