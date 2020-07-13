#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MatineeSndCfgMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MatineeSndCfgMgr"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T SearchConfig(Il2CppString* Key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AADCD4))(0, Key);
	}

};

}
