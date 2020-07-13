#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinErrorString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinErrorString"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetUpdateErrorString(uintptr_t errortype) {
		return ((T (*)(DolphinErrorString*, uintptr_t))(Il2CppBase() + 0x4521C58))(this, errortype);
	}

};

}
