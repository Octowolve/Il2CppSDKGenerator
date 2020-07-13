#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IContextProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IContextProperty"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IContextProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Freeze(uintptr_t newContext) {
		return ((T (*)(IContextProperty*, uintptr_t))(Il2CppBase() + 0x0))(this, newContext);
	}
	template <typename T = bool> T IsNewContextOK(uintptr_t newCtx) {
		return ((T (*)(IContextProperty*, uintptr_t))(Il2CppBase() + 0x0))(this, newCtx);
	}

};

}
