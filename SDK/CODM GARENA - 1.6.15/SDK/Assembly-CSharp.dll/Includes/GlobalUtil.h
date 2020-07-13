#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalUtil"));
	}

	template <typename T = bool> static T& IsFirstPlayGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsFirstStartApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& IsFinishLoadReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& IsFinishSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}


};

}
