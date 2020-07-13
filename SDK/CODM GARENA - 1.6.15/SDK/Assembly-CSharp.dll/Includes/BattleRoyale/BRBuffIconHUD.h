#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBuffIconHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBuffIconHUD"));
	}

	template <typename T = uintptr_t> T& BuffGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& itemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_itemList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> static T& ITEM_MAX_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBuffIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemViewById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRBuffIconHUD*))(Il2CppBase() + 0x24E34D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRBuffIconHUD*))(Il2CppBase() + 0x24E35EC))(this);
	}
	template <typename T = void> T OnShowBuffIcon(uintptr_t msg) {
		return ((T (*)(BRBuffIconHUD*, uintptr_t))(Il2CppBase() + 0x24E369C))(this, msg);
	}
	template <typename T = uintptr_t> T GetItemViewById(int32_t itemID) {
		return ((T (*)(BRBuffIconHUD*, int32_t))(Il2CppBase() + 0x24E3AB0))(this, itemID);
	}
	template <typename T = uintptr_t> T GetNextItemView() {
		return ((T (*)(BRBuffIconHUD*))(Il2CppBase() + 0x24E3C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRBuffIconHUD*))(Il2CppBase() + 0x24E4138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRBuffIconHUD*))(Il2CppBase() + 0x24E4140))(this);
	}

};

}
