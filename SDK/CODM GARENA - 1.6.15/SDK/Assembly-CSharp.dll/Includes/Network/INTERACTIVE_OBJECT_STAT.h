#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class INTERACTIVEOBJECTSTAT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "INTERACTIVE_OBJECT_STAT"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eINTERACTIVE_OBJECT_STAT_AVAILABLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eINTERACTIVE_OBJECT_STAT_UNAVAILABLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eINTERACTIVE_OBJECT_STAT_COOLINGDOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
