#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TssSdkVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TssSdkVersion"));
	}

	template <typename T = Il2CppString*> static T& cs_sdk_version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSdkVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetSdkVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AF7DFC))(0);
	}

};

}
