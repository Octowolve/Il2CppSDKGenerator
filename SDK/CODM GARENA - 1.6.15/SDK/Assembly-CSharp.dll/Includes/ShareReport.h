#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ShareReport*))(Il2CppBase() + 0x4959F1C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(Il2CppList<Il2CppString*>* reportDatas) {
		return ((T (*)(ShareReport*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4959F94))(this, reportDatas);
	}

};

}
