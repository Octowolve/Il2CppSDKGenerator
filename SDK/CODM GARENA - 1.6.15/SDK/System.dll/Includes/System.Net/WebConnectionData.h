#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebConnectionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebConnectionData"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& StatusCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& StatusDescription() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Headers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Challenge() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
