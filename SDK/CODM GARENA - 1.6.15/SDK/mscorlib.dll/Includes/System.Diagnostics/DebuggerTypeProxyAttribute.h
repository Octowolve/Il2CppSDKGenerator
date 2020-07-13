#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DebuggerTypeProxyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "DebuggerTypeProxyAttribute"));
	}

	template <typename T = Il2CppString*> T& proxy_type_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
