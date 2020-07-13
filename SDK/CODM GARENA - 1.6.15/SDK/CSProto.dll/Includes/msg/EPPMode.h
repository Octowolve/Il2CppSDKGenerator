#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EPPMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EPPMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EPP_DEFAULT_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPP_TPP_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPP_FPP_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
