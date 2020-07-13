#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class NetworkAIPawnDebugHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "NetworkAIPawnDebugHUD"));
	}

	template <typename T = uintptr_t> T& rootWidget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& healthLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& zombieName() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& localPawnhealth() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& activedZoneLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_NetWorkAIPawn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> static T& AboveHeadPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allZoneInScene() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(NetworkAIPawnDebugHUD*))(Il2CppBase() + 0x1FACC10))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(NetworkAIPawnDebugHUD*))(Il2CppBase() + 0x1FACD8C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(NetworkAIPawnDebugHUD*, float))(Il2CppBase() + 0x1FACD94))(this, dt);
	}
	template <typename T = void> T UpdateValue() {
		return ((T (*)(NetworkAIPawnDebugHUD*))(Il2CppBase() + 0x1FAD4AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NetworkAIPawnDebugHUD*))(Il2CppBase() + 0x1FAD5E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIPawnDebugHUD*, float))(Il2CppBase() + 0x1FAD5E8))(this, P0);
	}

};

}
