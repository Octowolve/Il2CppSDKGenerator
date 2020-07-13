#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GFMPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GFMPlugin"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectorFactory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetConnectorFactory() {
		return ((T (*)(GFMPlugin*))(Il2CppBase() + 0x45358D4))(this);
	}
	template <typename T = uintptr_t> static T gfm_connector_get_factory_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x45359C4))(0);
	}

};

}
