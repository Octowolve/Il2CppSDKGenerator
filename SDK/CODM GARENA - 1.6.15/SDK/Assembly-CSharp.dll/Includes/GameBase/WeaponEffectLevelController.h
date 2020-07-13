#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponEffectLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponEffectLevelController"));
	}

	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& DefaultEulerAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MaterialName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LevelData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CurLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Weapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffectLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Activate(uintptr_t Weapon) {
		return ((T (*)(WeaponEffectLevelController*, uintptr_t))(Il2CppBase() + 0x1C3EFB4))(this, Weapon);
	}
	template <typename T = void> T DeActivate() {
		return ((T (*)(WeaponEffectLevelController*))(Il2CppBase() + 0x1C42E40))(this);
	}
	template <typename T = void> T Tick(float interval) {
		return ((T (*)(WeaponEffectLevelController*, float))(Il2CppBase() + 0x1C1D0D8))(this, interval);
	}
	template <typename T = void> T ChangeEffectLevel(int32_t newLevel, bool forceChange, bool playSound) {
		return ((T (*)(WeaponEffectLevelController*, int32_t, bool, bool))(Il2CppBase() + 0x1C431E4))(this, newLevel, forceChange, playSound);
	}
	template <typename T = void> T SetLevelActive(int32_t level, bool active, bool playSound) {
		return ((T (*)(WeaponEffectLevelController*, int32_t, bool, bool))(Il2CppBase() + 0x1C6564C))(this, level, active, playSound);
	}

};

}
