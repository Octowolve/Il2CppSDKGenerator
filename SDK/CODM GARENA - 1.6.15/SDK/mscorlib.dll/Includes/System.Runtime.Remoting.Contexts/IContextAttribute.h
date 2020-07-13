#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContextAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContextAttribute"));
	}


	template <typename T = void> T GetPropertiesForNewContext(uintptr_t msg) {
		return ((T (*)(IContextAttribute*, uintptr_t))(Il2CppBase() + 0x0))(this, msg);
	}
	template <typename T = bool> T IsContextOK(uintptr_t ctx, uintptr_t msg) {
		return ((T (*)(IContextAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, ctx, msg);
	}

};

}
