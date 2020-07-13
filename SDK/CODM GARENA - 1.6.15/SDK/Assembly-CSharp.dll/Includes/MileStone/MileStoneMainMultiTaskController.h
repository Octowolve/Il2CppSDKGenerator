#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneMainMultiTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneMainMultiTaskController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePersonalController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateServerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRankingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T CreatePersonalController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DDCE4))(this);
	}
	template <typename T = uintptr_t> T CreateServerController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DDE08))(this);
	}
	template <typename T = uintptr_t> T CreateRankingController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DDF2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePersonalController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DE050))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateServerController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DE058))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateRankingController() {
		return ((T (*)(MileStoneMainMultiTaskController*))(Il2CppBase() + 0x41DE060))(this);
	}

};

}
