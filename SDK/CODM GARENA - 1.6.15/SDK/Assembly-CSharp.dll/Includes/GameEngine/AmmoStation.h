#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AmmoStation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AmmoStation"));
	}

	template <typename T = uintptr_t> T& perkMachineSignboard() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& currentMeshRenderder() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(AmmoStation*))(Il2CppBase() + 0x2B3FF3C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AmmoStation*))(Il2CppBase() + 0x2B40020))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(AmmoStation*))(Il2CppBase() + 0x2B40260))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(AmmoStation*, float))(Il2CppBase() + 0x2B40268))(this, fDeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AmmoStation*))(Il2CppBase() + 0x2B403A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AmmoStation*, float))(Il2CppBase() + 0x2B403AC))(this, P0);
	}

};

}
