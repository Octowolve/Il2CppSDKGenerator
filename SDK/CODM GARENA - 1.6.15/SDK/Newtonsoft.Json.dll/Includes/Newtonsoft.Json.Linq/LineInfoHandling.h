#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class LineInfoHandling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "LineInfoHandling"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Ignore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
