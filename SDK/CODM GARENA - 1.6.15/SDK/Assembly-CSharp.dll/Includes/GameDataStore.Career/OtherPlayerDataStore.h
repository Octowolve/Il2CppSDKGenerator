#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class OtherPlayerDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "OtherPlayerDataStore"));
	}

	template <typename T = Il2CppString*> static T& DataStoreSubscriberTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_SimpleInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& GameStatusInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetOtherPlayerInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCareerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_SimpleInfo() {
		return ((T (*)(OtherPlayerDataStore*))(Il2CppBase() + 0x4A0897C))(this);
	}
	template <typename T = void> T set_SimpleInfo(uintptr_t value) {
		return ((T (*)(OtherPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08984))(this, value);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(OtherPlayerDataStore*))(Il2CppBase() + 0x4A0898C))(this);
	}
	template <typename T = void> T OnGetOtherPlayerInfoRes(uintptr_t res) {
		return ((T (*)(OtherPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08A54))(this, res);
	}
	template <typename T = uintptr_t> T GetModeCareerData(uintptr_t mode) {
		return ((T (*)(OtherPlayerDataStore*, uintptr_t))(Il2CppBase() + 0x4A08B70))(this, mode);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(OtherPlayerDataStore*))(Il2CppBase() + 0x4A08CF4))(this);
	}

};

}
