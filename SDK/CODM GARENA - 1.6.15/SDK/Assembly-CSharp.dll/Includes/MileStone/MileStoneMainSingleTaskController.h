#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneMainSingleTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneMainSingleTaskController"));
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
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE10C))(this);
	}
	template <typename T = uintptr_t> T CreateServerController() {
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE230))(this);
	}
	template <typename T = uintptr_t> T CreateRankingController() {
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE354))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePersonalController() {
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE478))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateServerController() {
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE480))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateRankingController() {
		return ((T (*)(MileStoneMainSingleTaskController*))(Il2CppBase() + 0x41DE488))(this);
	}

};

}
