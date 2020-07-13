#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DogTagSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DogTagSignboard"));
	}

	template <typename T = Il2CppString*> T& BlueIcon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& RedIcon() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& signObject() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CampIcon() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t targetVolume) {
		return ((T (*)(DogTagSignboard*, uintptr_t))(Il2CppBase() + 0x46EE578))(this, targetVolume);
	}
	template <typename T = uintptr_t> T DelayShow() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EE660))(this);
	}
	template <typename T = void> T CheckShowBoard() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EE748))(this);
	}
	template <typename T = void> T CheckNear() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EEC3C))(this);
	}
	template <typename T = void> T CheckFar() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EEF00))(this);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EF1DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(DogTagSignboard*, uintptr_t))(Il2CppBase() + 0x46EF27C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckShowBoard() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EF284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNear() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EF28C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckFar() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EF294))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedClamp() {
		return ((T (*)(DogTagSignboard*))(Il2CppBase() + 0x46EF29C))(this);
	}

};

}
