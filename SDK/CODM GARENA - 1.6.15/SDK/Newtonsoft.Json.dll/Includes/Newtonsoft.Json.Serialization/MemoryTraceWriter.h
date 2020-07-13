#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class MemoryTraceWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "MemoryTraceWriter"));
	}

	template <typename T = void*> T& _traceMessages() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LevelFilter() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_LevelFilter() {
		return ((T (*)(MemoryTraceWriter*))(Il2CppBase() + 0x39A51C4))(this);
	}
	template <typename T = void> T set_LevelFilter(uintptr_t value) {
		return ((T (*)(MemoryTraceWriter*, uintptr_t))(Il2CppBase() + 0x39A51CC))(this, value);
	}
	template <typename T = void> T Trace(uintptr_t level, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(MemoryTraceWriter*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39A5288))(this, level, message, ex);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MemoryTraceWriter*))(Il2CppBase() + 0x39A5558))(this);
	}

};

}
