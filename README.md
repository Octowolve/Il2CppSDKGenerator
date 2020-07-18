# Il2CppSDKGenerator
An Il2Cpp SDK generator for Android (And probably IOS)

# How to use
1. Compile Il2CppSDK generator (or use release version)
2. Get your DummyDll from using [Il2CppDumper](https://github.com/Perfare/Il2CppDumper/)
3. Drag the whole folder of DummyDll to Il2CppSDK.exe
4. Wait for your SDK to be generated
5. Copy the result to your project
6. Copy precoded Il2Cpp Headers to your project (And include it to your Android.mk or CMakeList.txt)

Done!

# How to use the SDK
You can include an namespace header to compile whole classes within a namespace or just compile a single class, for example take a look at SDK result.

**Example:**
Please read how to Initialize Il2Cpp Functions first before using any of the SDK/Il2Cpp Functions.
```c++
#include "SDK/Assembly-CSharp.dll/GameBase.h"
#include "SDK/Assembly-CSharp.dll/GameEngine.h"

#include "SDK/UnityEngine.dll/Includes/UnityEngine/Component.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/Transform.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/Screen.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/Camera.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/Physics.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/RaycastHit.h"
#include "SDK/UnityEngine.dll/Includes/UnityEngine/Object.h"

using namespace UnityEngine;
using namespace GameBase;
using namespace GameEngine;

void PrintLocation()
{
  auto baseGame = GamePlay::get_Game<BaseGame *>();
  if (baseGame) {
    auto localPawn = GamePlay::get_LocalPawn<Pawn *>();
    if(localPawn){
      auto pawnTransform = ((Component *)localPawn)->get_transform<Transform *>();
      LOG("Local Pawn: %f %f %f", pawnTransform->get_position().x, pawnTransform->get_position().y, pawnTransform->get_position().z);
    }
  }
}
```
# Initiating Il2Cpp Functions
Before you use any `Il2Cpp` functions, you need to call `Attach` first.

```c++
...
void WaitForAttach()
{
  waitUntilLoaded(); // TODO: create function that loops when libil2cpp.so is not loaded yet.
  if(Il2Cpp::Attach() != 0)
  {
      // Something goes wrong here...
      exit(0);
  }
  // Attached!
  // You can call any Il2Cpp functions now.
}
```
# Changelogs
7 July 2020:
```
- Added CreateString functions to Il2Cpp Header
```
# Credits
dnlib: [dnlib](https://github.com/0xd4d/dnlib)
