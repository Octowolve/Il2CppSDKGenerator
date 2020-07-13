#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class IMethodMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "IMethodMessage"));
	}


	template <typename T = int32_t> T get_ArgCount() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Args() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LogicalCallContext() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MethodBase() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_MethodName() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MethodSignature() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Uri() {
		return ((T (*)(IMethodMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetArg(int32_t argNum) {
		return ((T (*)(IMethodMessage*, int32_t))(Il2CppBase() + 0x0))(this, argNum);
	}

};

}
