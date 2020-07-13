#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class IConstructionCallMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "IConstructionCallMessage"));
	}


	template <typename T = uintptr_t> T get_ActivationType() {
		return ((T (*)(IConstructionCallMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_ActivationTypeName() {
		return ((T (*)(IConstructionCallMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Activator() {
		return ((T (*)(IConstructionCallMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Activator(uintptr_t value) {
		return ((T (*)(IConstructionCallMessage*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CallSiteActivationAttributes() {
		return ((T (*)(IConstructionCallMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ContextProperties() {
		return ((T (*)(IConstructionCallMessage*))(Il2CppBase() + 0x0))(this);
	}

};

}
