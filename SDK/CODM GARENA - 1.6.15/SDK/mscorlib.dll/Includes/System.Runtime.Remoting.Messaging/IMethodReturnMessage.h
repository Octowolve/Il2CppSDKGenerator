#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class IMethodReturnMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage"));
	}


	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(IMethodReturnMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_OutArgCount() {
		return ((T (*)(IMethodReturnMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OutArgs() {
		return ((T (*)(IMethodReturnMessage*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ReturnValue() {
		return ((T (*)(IMethodReturnMessage*))(Il2CppBase() + 0x0))(this);
	}

};

}
