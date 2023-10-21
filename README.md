# Daisy-Seed-PIO-Template

## ⚠️ ATTENTION! ⚠️
This is my approach for a working PlatformIO template for the Daisy Seed board. The used resources can be found in this [very helpful forum post by user **stellar_aria**](https://forum.electro-smith.com/t/platformio-electrosmith-libdaisy-build-issues/3885/3). This approach is different from a similar template such as [this template by user **netherwaves**](https://github.com/netherwaves/ESDPIO-STM32Cube), which did not work for me and does not utilize PIO's structure well. However, it may be more customizable like this approach here.

## 🛑️ MORE ATTENTION! 🛑️
Of course, this template uses `libDaisy`. It does so by sourcing it from GitHub, **but not from Electrosmith, but from my modified fork.** This is because both a `library.json` and custom python build file called `platformio.py` are needed to make this repo work with PlatformIO. However, you can trust the fork as I have set up an instance of [GitHub Pull-App](https://github.com/apps/pull) to source from the original repo from Electrosmith every once in a while. As long as this account does not modify the fork or goes down, this template will work.
