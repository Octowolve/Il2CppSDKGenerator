#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class DebugUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "DebugUtils"));
	}


	template <typename T = void> static T Assert(bool condition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EEBD2C))(0, condition);
	}

};

}
