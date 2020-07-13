#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DoorSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DoorSignboard"));
	}

	template <typename T = uintptr_t> T& InfoLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CostLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& CostTable() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& signObject() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t targetVolume) {
		return ((T (*)(DoorSignboard*, uintptr_t))(Il2CppBase() + 0x46EF508))(this, targetVolume);
	}
	template <typename T = void> T CheckShowBoard() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46EF804))(this);
	}
	template <typename T = void> T CheckNear() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46EFC04))(this);
	}
	template <typename T = void> T CheckFar() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46EFE04))(this);
	}
	template <typename T = bool> T IsNeedClamp() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46F001C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(DoorSignboard*, uintptr_t))(Il2CppBase() + 0x46F00BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckShowBoard() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46F00C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNear() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46F00CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckFar() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46F00D4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedClamp() {
		return ((T (*)(DoorSignboard*))(Il2CppBase() + 0x46F00DC))(this);
	}

};

}
