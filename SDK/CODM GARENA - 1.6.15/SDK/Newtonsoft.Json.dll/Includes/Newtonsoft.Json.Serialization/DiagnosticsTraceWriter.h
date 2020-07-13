#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class DiagnosticsTraceWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "DiagnosticsTraceWriter"));
	}

	template <typename T = uintptr_t> T& LevelFilter() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_LevelFilter() {
		return ((T (*)(DiagnosticsTraceWriter*))(Il2CppBase() + 0x398812C))(this);
	}
	template <typename T = uintptr_t> T GetTraceEventType(uintptr_t level) {
		return ((T (*)(DiagnosticsTraceWriter*, uintptr_t))(Il2CppBase() + 0x3988134))(this, level);
	}
	template <typename T = void> T Trace(uintptr_t level, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(DiagnosticsTraceWriter*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3988208))(this, level, message, ex);
	}

};

}
