#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmEndlessSettlementPlayerItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmEndlessSettlementPlayerItemView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGainItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetGainItems(uintptr_t playerInfo) {
		return ((T (*)(ZmEndlessSettlementPlayerItemView*, uintptr_t))(Il2CppBase() + 0x2986794))(this, playerInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetGainItems(uintptr_t P0) {
		return ((T (*)(ZmEndlessSettlementPlayerItemView*, uintptr_t))(Il2CppBase() + 0x2986BF8))(this, P0);
	}

};

}
