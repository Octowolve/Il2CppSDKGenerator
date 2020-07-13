#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBBoxData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBBoxData"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(DBBoxData*))(Il2CppBase() + 0x51B7744))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(DBBoxData*, uint32_t))(Il2CppBase() + 0x51B774C))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(DBBoxData*))(Il2CppBase() + 0x51B7754))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(DBBoxData*, uint64_t))(Il2CppBase() + 0x51B775C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(DBBoxData*))(Il2CppBase() + 0x51B776C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBBoxData*, bool))(Il2CppBase() + 0x51B7774))(this, createIfMissing);
	}

};

}
