#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class SortDirection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "SortDirection"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Ascending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Descending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
