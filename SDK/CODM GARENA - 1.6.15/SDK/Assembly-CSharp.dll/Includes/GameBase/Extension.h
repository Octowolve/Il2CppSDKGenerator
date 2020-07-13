#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Extension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Extension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ToUnixTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int64_t> static T ToUnixTime(uintptr_t nowTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31D2B50))(0, nowTime);
	}

};

}
