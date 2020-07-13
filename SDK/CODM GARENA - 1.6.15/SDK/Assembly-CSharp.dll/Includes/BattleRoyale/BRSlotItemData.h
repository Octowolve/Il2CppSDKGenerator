#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSlotItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSlotItemData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_ItemDataType() {
		return ((T (*)(BRSlotItemData*))(Il2CppBase() + 0x1B41058))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BRSlotItemData*))(Il2CppBase() + 0x1B41060))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BRSlotItemData*))(Il2CppBase() + 0x1B413B8))(this);
	}

};

}
