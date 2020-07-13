#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropItemAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropItemAnimationComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T GetFloat(Il2CppString* name) {
		return ((T (*)(PropItemAnimationComponent*, Il2CppString*))(Il2CppBase() + 0x34BAD60))(this, name);
	}
	template <typename T = float> T GetFloat_1(int32_t nameID) {
		return ((T (*)(PropItemAnimationComponent*, int32_t))(Il2CppBase() + 0x34BAE08))(this, nameID);
	}
	template <typename T = float> T xLuaBaseProxy_GetFloat(Il2CppString* P0) {
		return ((T (*)(PropItemAnimationComponent*, Il2CppString*))(Il2CppBase() + 0x34BAEB0))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetFloat_1(int32_t P0) {
		return ((T (*)(PropItemAnimationComponent*, int32_t))(Il2CppBase() + 0x34BAEB8))(this, P0);
	}

};

}
