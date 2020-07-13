#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpVersion"));
	}

	template <typename T = uintptr_t> static T& Version10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Version11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
