#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueueServiceFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueueServiceFactory"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4436A1C))(0);
	}

};

}
