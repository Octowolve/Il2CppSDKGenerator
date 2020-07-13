#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEGameTopInfoPowerUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEGameTopInfoPowerUp"));
	}

	template <typename T = int32_t> T& PowerupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ParentGrid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_DeadTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TipsTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TwinkleDelta() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TwinkleAcc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bStart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PVEGameTopInfoPowerUp*))(Il2CppBase() + 0x3AA200C))(this);
	}
	template <typename T = void> T SetContent(float time, uintptr_t parentHUD) {
		return ((T (*)(PVEGameTopInfoPowerUp*, float, uintptr_t))(Il2CppBase() + 0x3AA20A4))(this, time, parentHUD);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVEGameTopInfoPowerUp*))(Il2CppBase() + 0x3AA218C))(this);
	}

};

}
