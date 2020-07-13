#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ZMLevelObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ZMLevelObject"));
	}

	template <typename T = bool> T& ShowOnRadar() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IgnoreUpDown() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = int32_t> T& BelongRegionId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(ZMLevelObject*))(Il2CppBase() + 0x33CC3FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ZMLevelObject*))(Il2CppBase() + 0x33CC49C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMLevelObject*))(Il2CppBase() + 0x33CC7D0))(this);
	}

};

}
