#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceImplSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceImplSettings"));
	}

	template <typename T = bool> T& AutoFlush() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& IndentLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IndentSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Listeners() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
