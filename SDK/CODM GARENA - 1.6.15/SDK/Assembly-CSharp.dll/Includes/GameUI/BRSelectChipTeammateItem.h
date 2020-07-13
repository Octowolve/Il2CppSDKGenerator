#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSelectChipTeammateItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSelectChipTeammateItem"));
	}

	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RoleSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ChipSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ChipSprite_Gray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NoChip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FX_ChipChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Mine() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NoneRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SeatLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SeatBackground() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Conf() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_LastChipId() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PlayChangeChipEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(BRSelectChipTeammateItem*))(Il2CppBase() + 0x3DBD5B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRSelectChipTeammateItem*))(Il2CppBase() + 0x3DBD5B8))(this);
	}
	template <typename T = void> T SetContent(uintptr_t pi) {
		return ((T (*)(BRSelectChipTeammateItem*, uintptr_t))(Il2CppBase() + 0x3DBD6FC))(this, pi);
	}
	template <typename T = void> T PlayChangeChipEffect() {
		return ((T (*)(BRSelectChipTeammateItem*))(Il2CppBase() + 0x3DBDC1C))(this);
	}
	template <typename T = void> T DelayHideEffect() {
		return ((T (*)(BRSelectChipTeammateItem*))(Il2CppBase() + 0x3DBDDA0))(this);
	}

};

}
