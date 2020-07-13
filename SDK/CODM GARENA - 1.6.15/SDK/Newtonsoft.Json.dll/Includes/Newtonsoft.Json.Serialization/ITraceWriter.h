#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ITraceWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ITraceWriter"));
	}


	template <typename T = uintptr_t> T get_LevelFilter() {
		return ((T (*)(ITraceWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Trace(uintptr_t level, Il2CppString* message, uintptr_t ex) {
		return ((T (*)(ITraceWriter*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, level, message, ex);
	}

};

}
