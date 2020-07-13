#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentManagerCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentManagerCollection"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& ManagerList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOrBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T FindOrBind(uint32_t playerID) {
		return ((T (*)(BREquipmentManagerCollection*, uint32_t))(Il2CppBase() + 0x18F1730))(this, playerID);
	}

};

}
