#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class IOHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "IOHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FileExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T FileExists(Il2CppString* file) {
		return ((T (*)(IOHelper*, Il2CppString*))(Il2CppBase() + 0x4A348E8))(this, file);
	}

};

}
