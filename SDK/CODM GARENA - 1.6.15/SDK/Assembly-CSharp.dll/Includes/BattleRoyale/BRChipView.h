#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipView"));
	}

	template <typename T = uintptr_t> T& ChipSpriteRight() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FocusObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ItemListener() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_ShowDetail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpriteIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRChipView*))(Il2CppBase() + 0x25002CC))(this);
	}
	template <typename T = void> T RefreshSpriteIcon(Il2CppString* name) {
		return ((T (*)(BRChipView*, Il2CppString*))(Il2CppBase() + 0x2500540))(this, name);
	}
	template <typename T = void> T OnClickChip(uintptr_t go) {
		return ((T (*)(BRChipView*, uintptr_t))(Il2CppBase() + 0x2500634))(this, go);
	}
	template <typename T = void> T CloseDesc() {
		return ((T (*)(BRChipView*))(Il2CppBase() + 0x25008D8))(this);
	}
	template <typename T = void> T ShowDesc(bool bShow) {
		return ((T (*)(BRChipView*, bool))(Il2CppBase() + 0x25007E4))(this, bShow);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRChipView*))(Il2CppBase() + 0x2500988))(this);
	}

};

}
