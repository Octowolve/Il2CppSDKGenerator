#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_LOC_VALIDATEERR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LOC_VALIDATEERR_LOCID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T LOC_VALIDATEERR(int32_t errCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x434D604))(0, errCode);
	}
	template <typename T = Il2CppString*> static T LOC_VALIDATEERR_LOCID(int32_t errCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x434D740))(0, errCode);
	}

};

}
