#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class EnumMemberAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Runtime.Serialization.dll", "System.Runtime.Serialization", "EnumMemberAttribute"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(EnumMemberAttribute*))(Il2CppBase() + 0x52DB3D0))(this);
	}

};

}
