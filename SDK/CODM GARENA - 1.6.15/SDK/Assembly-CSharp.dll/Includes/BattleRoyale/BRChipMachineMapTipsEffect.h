#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipMachineMapTipsEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipMachineMapTipsEffect"));
	}

	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OutCircle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InsideCircle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ChipMachine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bHasPlay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReActiveUISprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetNotifySelfUISpriteSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRChipMachineMapTipsEffect*))(Il2CppBase() + 0x24FD114))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(BRChipMachineMapTipsEffect*))(Il2CppBase() + 0x24FD1B8))(this);
	}
	template <typename T = void> T ReActiveUISprite() {
		return ((T (*)(BRChipMachineMapTipsEffect*))(Il2CppBase() + 0x24FD5C4))(this);
	}
	template <typename T = void> T ResetNotifySelfUISpriteSize() {
		return ((T (*)(BRChipMachineMapTipsEffect*))(Il2CppBase() + 0x24FD344))(this);
	}
	template <typename T = void> T BindChipMachine(uintptr_t machine) {
		return ((T (*)(BRChipMachineMapTipsEffect*, uintptr_t))(Il2CppBase() + 0x24FD9C4))(this, machine);
	}

};

}
