#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPlayerController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanStartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRotateWhenSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T CanStartSpectating() {
		return ((T (*)(MPPlayerController*))(Il2CppBase() + 0x4622DF0))(this);
	}
	template <typename T = bool> T AllowRotateWhenSpectating() {
		return ((T (*)(MPPlayerController*))(Il2CppBase() + 0x4622F04))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanStartSpectating() {
		return ((T (*)(MPPlayerController*))(Il2CppBase() + 0x4622FA4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_AllowRotateWhenSpectating() {
		return ((T (*)(MPPlayerController*))(Il2CppBase() + 0x4622FAC))(this);
	}

};

}
