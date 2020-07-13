#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspDropGameNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspDropGameNtf"));
	}

	template <typename T = uint64_t> T& _user_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(CSGspDropGameNtf*))(Il2CppBase() + 0x51D9F38))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(CSGspDropGameNtf*, uint64_t))(Il2CppBase() + 0x51D9F40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspDropGameNtf*, bool))(Il2CppBase() + 0x51D9F50))(this, createIfMissing);
	}

};

}
