#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentElectricShockCar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachment_ElectricShockCar"));
	}

	template <typename T = float> T& MeshHiddenTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGetWeaponAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayGetWeaponAnimation() {
		return ((T (*)(WeaponAttachmentElectricShockCar*))(Il2CppBase() + 0x1C4F90C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponAttachmentElectricShockCar*, float))(Il2CppBase() + 0x1C4FAC0))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_PlayGetWeaponAnimation() {
		return ((T (*)(WeaponAttachmentElectricShockCar*))(Il2CppBase() + 0x1C4FCA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAttachmentElectricShockCar*, float))(Il2CppBase() + 0x1C4FCAC))(this, P0);
	}

};

}
