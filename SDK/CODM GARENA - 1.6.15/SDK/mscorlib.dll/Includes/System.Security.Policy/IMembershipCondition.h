#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class IMembershipCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "IMembershipCondition"));
	}


	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(IMembershipCondition*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}

};

}
