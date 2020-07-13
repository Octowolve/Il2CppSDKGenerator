#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketPawnMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketPawnMonitor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnActorList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdatePawnActorList() {
		return ((T (*)(BlackMarketPawnMonitor*))(Il2CppBase() + 0x24B88C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePawnActorList() {
		return ((T (*)(BlackMarketPawnMonitor*))(Il2CppBase() + 0x24B8F40))(this);
	}

};

}
