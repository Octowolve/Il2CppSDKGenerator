#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RouteExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RouteExportConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ConfigList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RoutePointGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(RouteExportConfig*))(Il2CppBase() + 0x4147FAC))(this);
	}

};

}
