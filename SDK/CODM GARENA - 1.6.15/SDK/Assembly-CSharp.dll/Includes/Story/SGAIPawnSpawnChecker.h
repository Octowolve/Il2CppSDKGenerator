#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGAIPawnSpawnChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGAIPawnSpawnChecker"));
	}

	template <typename T = uintptr_t> T& EasyModeConfig() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NormalModeConfig() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& HardModeConfig() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SGAIPawnSpawnChecker*))(Il2CppBase() + 0x395F640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SGAIPawnSpawnChecker*))(Il2CppBase() + 0x395F7D8))(this);
	}

};

}
