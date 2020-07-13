#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLIndicatorsHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLIndicatorsHud"));
	}

	template <typename T = uintptr_t> T& SpriteSelf() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpriteEnemy() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_OwnerCamp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_VTOLOwner() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uint32_t ActorID) {
		return ((T (*)(VTOLIndicatorsHud*, uint32_t))(Il2CppBase() + 0x1BE81CC))(this, ActorID);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VTOLIndicatorsHud*))(Il2CppBase() + 0x1BE84D8))(this);
	}
	template <typename T = void> T UpdateIndicators() {
		return ((T (*)(VTOLIndicatorsHud*))(Il2CppBase() + 0x1BE8604))(this);
	}
	template <typename T = void> T DrawIndicator(uintptr_t sprite, uintptr_t target) {
		return ((T (*)(VTOLIndicatorsHud*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BE92AC))(this, sprite, target);
	}

};

}
