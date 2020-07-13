#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankModel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& brTabInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spvpTabInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& zmTabInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTabConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TabParser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(RankModel*))(Il2CppBase() + 0x3812A84))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(RankModel*))(Il2CppBase() + 0x3812D38))(this);
	}
	template <typename T = void> T InitTabConfig() {
		return ((T (*)(RankModel*))(Il2CppBase() + 0x3812B34))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T TabParser(void* tabCsvList) {
		return ((T (*)(RankModel*, void*))(Il2CppBase() + 0x21D1B00))(this, tabCsvList);
	}
	template <typename T = uintptr_t> T GetTabCsv(uintptr_t modeType, uintptr_t tab) {
		return ((T (*)(RankModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3806BA8))(this, modeType, tab);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(RankModel*))(Il2CppBase() + 0x3812E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(RankModel*))(Il2CppBase() + 0x3812E3C))(this);
	}

};

}
