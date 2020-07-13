#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class ReferenceLoopHandling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "ReferenceLoopHandling"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Ignore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
