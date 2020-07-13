#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class NavigationDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "NavigationDataStore"));
	}

	template <typename T = bool> T& m_JustLogin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_FromMatch() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_JustLogin() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383BA94))(this);
	}
	template <typename T = void> T set_JustLogin(bool value) {
		return ((T (*)(NavigationDataStore*, bool))(Il2CppBase() + 0x383BA9C))(this, value);
	}
	template <typename T = bool> T get_FromMatch() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383BAA4))(this);
	}
	template <typename T = void> T set_FromMatch(bool value) {
		return ((T (*)(NavigationDataStore*, bool))(Il2CppBase() + 0x383BAAC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DataList() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383A188))(this);
	}
	template <typename T = void> T set_DataList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(NavigationDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x383A6F0))(this, value);
	}
	template <typename T = void> T ClearDataList() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383A4B8))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383BAB4))(this);
	}
	template <typename T = void> T UserLogin(uint64_t playerId) {
		return ((T (*)(NavigationDataStore*, uint64_t))(Il2CppBase() + 0x383BB64))(this, playerId);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(NavigationDataStore*))(Il2CppBase() + 0x383BC48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UserLogin(uint64_t P0) {
		return ((T (*)(NavigationDataStore*, uint64_t))(Il2CppBase() + 0x383BC50))(this, P0);
	}

};

}
