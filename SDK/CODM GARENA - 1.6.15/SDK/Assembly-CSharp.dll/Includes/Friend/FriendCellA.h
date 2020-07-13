#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendCellA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendCellA"));
	}

	template <typename T = uintptr_t> T& StatusMask() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& UnBlockBtn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& friendType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnBlockBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(FriendCellA*))(Il2CppBase() + 0x3CE3F18))(this);
	}
	template <typename T = void> T OnUnBlockBtnClick() {
		return ((T (*)(FriendCellA*))(Il2CppBase() + 0x3CE40B4))(this);
	}
	template <typename T = void> T Configure(uintptr_t state) {
		return ((T (*)(FriendCellA*, uintptr_t))(Il2CppBase() + 0x3CE42B8))(this, state);
	}
	template <typename T = void> T Configure_1(uintptr_t friend, uintptr_t mCutPanel) {
		return ((T (*)(FriendCellA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE43DC))(this, friend, mCutPanel);
	}
	template <typename T = void> T Configure_2(uintptr_t friend, uintptr_t mCutPanel, bool bShowEffect) {
		return ((T (*)(FriendCellA*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3CE0D04))(this, friend, mCutPanel, bShowEffect);
	}
	template <typename T = void> T Configure_3(uintptr_t recommend, int32_t index) {
		return ((T (*)(FriendCellA*, uintptr_t, int32_t))(Il2CppBase() + 0x3CE4BE4))(this, recommend, index);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(FriendCellA*))(Il2CppBase() + 0x3CE4CD8))(this);
	}

};

}
