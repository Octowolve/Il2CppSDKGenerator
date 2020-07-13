#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrError
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrError"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& errorTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T getErrorString(uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x444A4F8))(0, errorCode);
	}

};

}
