#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class MethodReturnDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "MethodReturnDictionary"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& InternalReturnKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& InternalExceptionKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
