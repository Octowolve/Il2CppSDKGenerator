#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class IObjectReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "IObjectReference"));
	}


	template <typename T = uintptr_t> T GetRealObject(uintptr_t context) {
		return ((T (*)(IObjectReference*, uintptr_t))(Il2CppBase() + 0x0))(this, context);
	}

};

}
