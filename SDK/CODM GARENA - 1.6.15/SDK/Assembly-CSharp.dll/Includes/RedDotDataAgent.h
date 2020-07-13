#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RedDotDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RedDotDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mRedDotDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqSetRedDotTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRedDotInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotInfoByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_RedDotDS() {
		return ((T (*)(RedDotDataAgent*))(Il2CppBase() + 0x38277A0))(this);
	}
	template <typename T = void> T ReqSetRedDotTimeStamp() {
		return ((T (*)(RedDotDataAgent*))(Il2CppBase() + 0x3827850))(this);
	}
	template <typename T = void> T ReqRedDotInfo() {
		return ((T (*)(RedDotDataAgent*))(Il2CppBase() + 0x3827C34))(this);
	}
	template <typename T = void> T RefreshRedDotInfoByServer(Il2CppList<uintptr_t>* pvplist, Il2CppList<uintptr_t>* brList, uint32_t userCreateTimeStamp) {
		return ((T (*)(RedDotDataAgent*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uint32_t))(Il2CppBase() + 0x3827D80))(this, pvplist, brList, userCreateTimeStamp);
	}

};

}
