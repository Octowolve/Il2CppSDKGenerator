#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBAttachmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBAttachmentData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _HostInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBAttachmentData*))(Il2CppBase() + 0x51B7634))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBAttachmentData*, uintptr_t))(Il2CppBase() + 0x51B763C))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(DBAttachmentData*))(Il2CppBase() + 0x51B7644))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(DBAttachmentData*, bool))(Il2CppBase() + 0x51B764C))(this, value);
	}
	template <typename T = uintptr_t> T get_HostInfo() {
		return ((T (*)(DBAttachmentData*))(Il2CppBase() + 0x51B7654))(this);
	}
	template <typename T = void> T set_HostInfo(uintptr_t value) {
		return ((T (*)(DBAttachmentData*, uintptr_t))(Il2CppBase() + 0x51B765C))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(DBAttachmentData*))(Il2CppBase() + 0x51B7664))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(DBAttachmentData*, int32_t))(Il2CppBase() + 0x51B766C))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(DBAttachmentData*))(Il2CppBase() + 0x51B7674))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(DBAttachmentData*, int32_t))(Il2CppBase() + 0x51B767C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBAttachmentData*, bool))(Il2CppBase() + 0x51B7684))(this, createIfMissing);
	}

};

}
