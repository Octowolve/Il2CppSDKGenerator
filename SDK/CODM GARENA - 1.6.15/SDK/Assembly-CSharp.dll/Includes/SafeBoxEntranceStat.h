#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeBoxEntranceStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SafeBoxEntranceStat"));
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
		return ((T (*)(SafeBoxEntranceStat*))(Il2CppBase() + 0x4953C88))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLog(Il2CppList<Il2CppString*>* customInfo) {
		return ((T (*)(SafeBoxEntranceStat*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4953D00))(this, customInfo);
	}

};

}
