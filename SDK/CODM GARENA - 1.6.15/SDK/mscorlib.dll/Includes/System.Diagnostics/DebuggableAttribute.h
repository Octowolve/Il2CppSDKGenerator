#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DebuggableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "DebuggableAttribute"));
	}

	template <typename T = bool> T& JITTrackingEnabledFlag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& JITOptimizerDisabledFlag() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& debuggingModes() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
