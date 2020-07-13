#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBConciseResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBConciseResult"));
	}

	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _attachment_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skill_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DBConciseResult*))(Il2CppBase() + 0x51B7A3C))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DBConciseResult*, uint32_t))(Il2CppBase() + 0x51B7A44))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_attachment_id() {
		return ((T (*)(DBConciseResult*))(Il2CppBase() + 0x51B7A4C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skill_id() {
		return ((T (*)(DBConciseResult*))(Il2CppBase() + 0x51B7A54))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBConciseResult*, bool))(Il2CppBase() + 0x51B7A5C))(this, createIfMissing);
	}

};

}
