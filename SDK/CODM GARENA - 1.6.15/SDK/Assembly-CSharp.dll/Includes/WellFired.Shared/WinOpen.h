#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class WinOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "WinOpen"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenFolderToDisplayFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OpenFolderToDisplayFile(Il2CppString* filePath) {
		return ((T (*)(WinOpen*, Il2CppString*))(Il2CppBase() + 0x4A3615C))(this, filePath);
	}

};

}
