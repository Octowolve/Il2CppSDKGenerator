#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResourceExtInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResourceExtInfo"));
	}

	template <typename T = uint32_t> T& _ctime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _mtime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _svr_version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _note() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_ctime() {
		return ((T (*)(ResourceExtInfo*))(Il2CppBase() + 0x5071BB4))(this);
	}
	template <typename T = void> T set_ctime(uint32_t value) {
		return ((T (*)(ResourceExtInfo*, uint32_t))(Il2CppBase() + 0x5071BBC))(this, value);
	}
	template <typename T = uint32_t> T get_mtime() {
		return ((T (*)(ResourceExtInfo*))(Il2CppBase() + 0x5071BC4))(this);
	}
	template <typename T = void> T set_mtime(uint32_t value) {
		return ((T (*)(ResourceExtInfo*, uint32_t))(Il2CppBase() + 0x5071BCC))(this, value);
	}
	template <typename T = uint32_t> T get_svr_version() {
		return ((T (*)(ResourceExtInfo*))(Il2CppBase() + 0x5071BD4))(this);
	}
	template <typename T = void> T set_svr_version(uint32_t value) {
		return ((T (*)(ResourceExtInfo*, uint32_t))(Il2CppBase() + 0x5071BDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_note() {
		return ((T (*)(ResourceExtInfo*))(Il2CppBase() + 0x5071BE4))(this);
	}
	template <typename T = void> T set_note(Il2CppString* value) {
		return ((T (*)(ResourceExtInfo*, Il2CppString*))(Il2CppBase() + 0x5071BEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResourceExtInfo*, bool))(Il2CppBase() + 0x5071BF4))(this, createIfMissing);
	}

};

}
