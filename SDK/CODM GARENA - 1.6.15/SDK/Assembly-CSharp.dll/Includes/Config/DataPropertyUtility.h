#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataPropertyUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataPropertyUtility"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSectionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T GetSectionName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x463F9E8))(0, type);
	}
	template <typename T = uintptr_t> static T GetDataType(Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x463FC38))(0, section);
	}

};

}
