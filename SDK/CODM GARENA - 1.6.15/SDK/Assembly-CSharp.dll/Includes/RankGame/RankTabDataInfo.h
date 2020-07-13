#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankTabDataInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankTabDataInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTabConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(RankTabDataInfo*))(Il2CppBase() + 0x3816F78))(this);
	}
	template <typename T = void> T InitTabConfig() {
		return ((T (*)(RankTabDataInfo*))(Il2CppBase() + 0x3817028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(RankTabDataInfo*))(Il2CppBase() + 0x38170C0))(this);
	}

};

}
