#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSelectChipItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSelectChipItem"));
	}

	template <typename T = uintptr_t> T& SelectCollider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TeammateSelectedRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SeatLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SeatBackground() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MySelectedRoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CannotSelectMask() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LockState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Conf() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ChipState() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bHide() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInitial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingSelectPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPreSelectPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChipState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetConf() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBC190))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBC230))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBC3E8))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBC4F0))(this);
	}
	template <typename T = void> T SetInitial() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBC2D4))(this);
	}
	template <typename T = void> T SetPendingSelectPlayer(uintptr_t pi) {
		return ((T (*)(BRSelectChipItem*, uintptr_t))(Il2CppBase() + 0x3DBC6FC))(this, pi);
	}
	template <typename T = void> T SetPreSelectPlayer(uintptr_t pi) {
		return ((T (*)(BRSelectChipItem*, uintptr_t))(Il2CppBase() + 0x3DBC8EC))(this, pi);
	}
	template <typename T = void> T SetSelectPlayer(uintptr_t pi) {
		return ((T (*)(BRSelectChipItem*, uintptr_t))(Il2CppBase() + 0x3DBCA18))(this, pi);
	}
	template <typename T = void> T SetContent(uintptr_t conf, uintptr_t owner) {
		return ((T (*)(BRSelectChipItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DBCC08))(this, conf, owner);
	}
	template <typename T = void> T OnClickItem(uintptr_t obj) {
		return ((T (*)(BRSelectChipItem*, uintptr_t))(Il2CppBase() + 0x3DBCD5C))(this, obj);
	}
	template <typename T = void> T SetChipState(uintptr_t state) {
		return ((T (*)(BRSelectChipItem*, uintptr_t))(Il2CppBase() + 0x3DBD35C))(this, state);
	}
	template <typename T = uintptr_t> T GetChipState() {
		return ((T (*)(BRSelectChipItem*))(Il2CppBase() + 0x3DBD46C))(this);
	}

};

}
