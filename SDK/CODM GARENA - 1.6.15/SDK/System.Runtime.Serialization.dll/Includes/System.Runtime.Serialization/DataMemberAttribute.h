#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class DataMemberAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Runtime.Serialization.dll", "System.Runtime.Serialization", "DataMemberAttribute"));
	}

	template <typename T = bool> T& is_required() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& emit_default() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_EmitDefaultValue() {
		return ((T (*)(DataMemberAttribute*))(Il2CppBase() + 0x52DB3B0))(this);
	}
	template <typename T = bool> T get_IsRequired() {
		return ((T (*)(DataMemberAttribute*))(Il2CppBase() + 0x52DB3B8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DataMemberAttribute*))(Il2CppBase() + 0x52DB3C0))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(DataMemberAttribute*))(Il2CppBase() + 0x52DB3C8))(this);
	}

};

}
