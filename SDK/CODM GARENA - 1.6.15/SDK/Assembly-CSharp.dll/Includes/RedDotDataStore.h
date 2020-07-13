#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RedDotDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RedDotDataStore"));
	}

	template <typename T = bool> T& m_IsRedDotValid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ReqSetRedDotList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ServerPvpRedDotlist() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ServerBrRedDotList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_UserCreateTimeStamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedDotTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotInfoByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsRedDotValid() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3828178))(this);
	}
	template <typename T = void> T set_IsRedDotValid(bool value) {
		return ((T (*)(RedDotDataStore*, bool))(Il2CppBase() + 0x3827D78))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ReqSetRedDotList() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3827C2C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ServerPvpRedDotList() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3828180))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ServerBrRedDotList() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3828188))(this);
	}
	template <typename T = uint32_t> T get_UserCreateTimeStamp() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3828190))(this);
	}
	template <typename T = void> T SetRedDotTimeStamp(uintptr_t gameType, uintptr_t matchType, uint32_t tag, uint32_t serverTime) {
		return ((T (*)(RedDotDataStore*, uintptr_t, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x3828198))(this, gameType, matchType, tag, serverTime);
	}
	template <typename T = void> T RefreshRedDotInfoByServer(Il2CppList<uintptr_t>* pvpRedDotlist, Il2CppList<uintptr_t>* brRedDotList, uint32_t userCreateTimeStamp) {
		return ((T (*)(RedDotDataStore*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uint32_t))(Il2CppBase() + 0x3827EA0))(this, pvpRedDotlist, brRedDotList, userCreateTimeStamp);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x38284A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(RedDotDataStore*))(Il2CppBase() + 0x3828550))(this);
	}

};

}
