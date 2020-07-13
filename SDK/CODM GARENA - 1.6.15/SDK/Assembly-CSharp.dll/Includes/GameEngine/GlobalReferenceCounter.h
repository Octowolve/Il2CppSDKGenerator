#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GlobalReferenceCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GlobalReferenceCounter"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& m_RawAssetReferenceCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReferenceCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T GetReferenceCounter() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E6BCC))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E6CCC))(0);
	}

};

}
