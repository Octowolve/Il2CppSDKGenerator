#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeadSetDetector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeadSetDetector"));
	}

	template <typename T = uintptr_t> static T& DetectorWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceGetCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x474D908))(0);
	}
	template <typename T = int32_t> static T GetCurState() {
		return ((T (*)(void *))(Il2CppBase() + 0x474DBD0))(0);
	}
	template <typename T = int32_t> static T ForceGetCurState() {
		return ((T (*)(void *))(Il2CppBase() + 0x474DD8C))(0);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x474DE74))(0);
	}

};

}
