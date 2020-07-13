#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopLeftTabItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopLeftTabItem"));
	}

	template <typename T = int32_t> T& SelectTagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TagId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bShowRedDotIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& EnableSubTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RejectSubTag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_bDisplayIcon() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8CF34))(this);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8CFEC))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(CodmShopLeftTabItem*, int32_t))(Il2CppBase() + 0x3C8CFF4))(this, value);
	}
	template <typename T = bool> T get_EnableSubTag() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8CFFC))(this);
	}
	template <typename T = void> T set_EnableSubTag(bool value) {
		return ((T (*)(CodmShopLeftTabItem*, bool))(Il2CppBase() + 0x3C8D004))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RejectSubTag() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8D00C))(this);
	}
	template <typename T = void> T set_RejectSubTag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CodmShopLeftTabItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C8D014))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8CFE4))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(CodmShopLeftTabItem*, Il2CppString*))(Il2CppBase() + 0x3C8D01C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8D024))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CodmShopLeftTabItem*, Il2CppString*))(Il2CppBase() + 0x3C8D02C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CodmShopLeftTabItem*))(Il2CppBase() + 0x3C8D034))(this);
	}

};

}
