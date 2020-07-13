#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyBPExpBuffDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyBPExpBuffDataStore"));
	}

	template <typename T = uintptr_t> T& mActvBpExpInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mCardBpExpInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActvBpExpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCardBpExpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetCardBpExpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCardBuffValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBpExpInfoByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBpExpBuffValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ActvBpExpInfo() {
		return ((T (*)(LobbyBPExpBuffDataStore*))(Il2CppBase() + 0x4336800))(this);
	}
	template <typename T = uintptr_t> T get_CardBpExpInfo() {
		return ((T (*)(LobbyBPExpBuffDataStore*))(Il2CppBase() + 0x4336808))(this);
	}
	template <typename T = void> T SetActvBpExpInfo(uintptr_t actvData) {
		return ((T (*)(LobbyBPExpBuffDataStore*, uintptr_t))(Il2CppBase() + 0x4336810))(this, actvData);
	}
	template <typename T = void> T SetCardBpExpInfo(bool bTime, int32_t expireTime, bool bFactor, int32_t factor) {
		return ((T (*)(LobbyBPExpBuffDataStore*, bool, int32_t, bool, int32_t))(Il2CppBase() + 0x4336980))(this, bTime, expireTime, bFactor, factor);
	}
	template <typename T = void> T SetCardBpExpInfo_1(uintptr_t bpExpItem) {
		return ((T (*)(LobbyBPExpBuffDataStore*, uintptr_t))(Il2CppBase() + 0x4336A40))(this, bpExpItem);
	}
	template <typename T = void> T SetCardBuffValue(Il2CppList<uintptr_t>* bpNumberItem) {
		return ((T (*)(LobbyBPExpBuffDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4336C3C))(this, bpNumberItem);
	}
	template <typename T = uintptr_t> T GetBpExpInfoByType(int32_t serverTime, uintptr_t expType) {
		return ((T (*)(LobbyBPExpBuffDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4336CDC))(this, serverTime, expType);
	}
	template <typename T = bool> T IsBpExpBuffValid(int32_t serverTime) {
		return ((T (*)(LobbyBPExpBuffDataStore*, int32_t))(Il2CppBase() + 0x4336DF4))(this, serverTime);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LobbyBPExpBuffDataStore*))(Il2CppBase() + 0x4336EF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LobbyBPExpBuffDataStore*))(Il2CppBase() + 0x4336FA0))(this);
	}

};

}
