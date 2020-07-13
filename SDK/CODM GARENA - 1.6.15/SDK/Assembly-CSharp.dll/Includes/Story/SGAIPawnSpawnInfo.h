#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGAIPawnSpawnInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGAIPawnSpawnInfo"));
	}

	template <typename T = int32_t> T& AIPawnType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Ratio() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPawnType() {
		return ((T (*)(SGAIPawnSpawnInfo*))(Il2CppBase() + 0x395F884))(this);
	}
	template <typename T = int32_t> T GetRatio() {
		return ((T (*)(SGAIPawnSpawnInfo*))(Il2CppBase() + 0x395F924))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetPawnType() {
		return ((T (*)(SGAIPawnSpawnInfo*))(Il2CppBase() + 0x395F9C4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetRatio() {
		return ((T (*)(SGAIPawnSpawnInfo*))(Il2CppBase() + 0x395F9CC))(this);
	}

};

}
