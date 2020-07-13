#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvHpV5Ntf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvHpV5Ntf"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvHpV5Ntf*))(Il2CppBase() + 0x51E3B7C))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvHpV5Ntf*, uint64_t))(Il2CppBase() + 0x51E3B84))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_level() {
		return ((T (*)(CSActvHpV5Ntf*))(Il2CppBase() + 0x51E3B94))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvHpV5Ntf*, bool))(Il2CppBase() + 0x51E3B9C))(this, createIfMissing);
	}

};

}
