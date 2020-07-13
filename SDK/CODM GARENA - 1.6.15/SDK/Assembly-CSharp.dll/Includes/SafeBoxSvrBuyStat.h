#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeBoxSvrBuyStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SafeBoxSvrBuyStat"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SafeBoxSvrBuyStat*))(Il2CppBase() + 0x4954050))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLog(Il2CppList<Il2CppString*>* customInfo) {
		return ((T (*)(SafeBoxSvrBuyStat*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x49540C8))(this, customInfo);
	}

};

}
