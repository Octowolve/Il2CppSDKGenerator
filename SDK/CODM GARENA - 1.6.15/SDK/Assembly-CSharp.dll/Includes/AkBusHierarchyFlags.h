#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBusHierarchyFlags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBusHierarchyFlags"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& AkBusHierarchy_Primary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AkBusHierarchy_Secondary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AkBusHierarchy_IsMaster() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
