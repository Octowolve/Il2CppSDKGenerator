#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountUpdateSimpleInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_UpdateSimpleInfoNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _numerics() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _delta() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_numerics() {
		return ((T (*)(CSAccountUpdateSimpleInfoNtf*))(Il2CppBase() + 0x516FA00))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_delta() {
		return ((T (*)(CSAccountUpdateSimpleInfoNtf*))(Il2CppBase() + 0x516FA08))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountUpdateSimpleInfoNtf*, bool))(Il2CppBase() + 0x516FA10))(this, createIfMissing);
	}

};

}
