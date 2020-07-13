#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ZMMPGameEndHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ZMMPGameEndHud"));
	}

	template <typename T = uintptr_t> T& LoseRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMMPGameEndHud*))(Il2CppBase() + 0x4068C78))(this);
	}
	template <typename T = void> T ShowLose() {
		return ((T (*)(ZMMPGameEndHud*))(Il2CppBase() + 0x4068D70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMMPGameEndHud*))(Il2CppBase() + 0x4068E5C))(this);
	}

};

}
