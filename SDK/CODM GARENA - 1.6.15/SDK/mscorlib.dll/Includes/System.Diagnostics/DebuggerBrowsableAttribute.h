#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DebuggerBrowsableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "DebuggerBrowsableAttribute"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
