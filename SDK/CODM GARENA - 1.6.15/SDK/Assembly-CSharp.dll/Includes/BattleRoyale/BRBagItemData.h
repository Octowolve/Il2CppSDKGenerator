#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBagItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBagItemData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_ItemDataType() {
		return ((T (*)(BRBagItemData*))(Il2CppBase() + 0x24D209C))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(BRBagItemData*, uintptr_t))(Il2CppBase() + 0x24D20A4))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BRBagItemData*))(Il2CppBase() + 0x24D2418))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BRBagItemData*))(Il2CppBase() + 0x24D2708))(this);
	}

};

}
