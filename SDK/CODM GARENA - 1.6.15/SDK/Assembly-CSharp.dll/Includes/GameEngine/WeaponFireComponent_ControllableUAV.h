#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentControllableUAV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ControllableUAV"));
	}

	template <typename T = float> T& m_CruiseTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_AirplaneID() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_SpawnCircleHeight() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_SpawnCircleRadius() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentControllableUAV*, uintptr_t, bool))(Il2CppBase() + 0x23CAC50))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentControllableUAV*))(Il2CppBase() + 0x23CAD90))(this);
	}
	template <typename T = float> T get_SpawnCircleHeight() {
		return ((T (*)(WeaponFireComponentControllableUAV*))(Il2CppBase() + 0x23CAE4C))(this);
	}
	template <typename T = float> T get_SpawnCircleRadius() {
		return ((T (*)(WeaponFireComponentControllableUAV*))(Il2CppBase() + 0x23CAE54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentControllableUAV*, uintptr_t, bool))(Il2CppBase() + 0x23CAE5C))(this, P0, P1);
	}

};

}
