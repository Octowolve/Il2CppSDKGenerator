#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class MethodCallDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "MethodCallDictionary"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& InternalKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
