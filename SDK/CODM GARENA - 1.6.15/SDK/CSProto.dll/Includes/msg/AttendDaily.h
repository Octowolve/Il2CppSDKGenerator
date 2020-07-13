#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AttendDaily
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AttendDaily"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _awards() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_awards() {
		return ((T (*)(AttendDaily*))(Il2CppBase() + 0x510C7B8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AttendDaily*, bool))(Il2CppBase() + 0x510C7C0))(this, createIfMissing);
	}

};

}
