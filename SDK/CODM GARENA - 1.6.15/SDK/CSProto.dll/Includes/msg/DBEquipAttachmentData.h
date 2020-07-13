#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquipAttachmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquipAttachmentData"));
	}

	template <typename T = int32_t> T& _PosIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _AttachmentGUID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _AttachmentID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_PosIdx() {
		return ((T (*)(DBEquipAttachmentData*))(Il2CppBase() + 0x51B7AA4))(this);
	}
	template <typename T = void> T set_PosIdx(int32_t value) {
		return ((T (*)(DBEquipAttachmentData*, int32_t))(Il2CppBase() + 0x51B7AAC))(this, value);
	}
	template <typename T = uint64_t> T get_AttachmentGUID() {
		return ((T (*)(DBEquipAttachmentData*))(Il2CppBase() + 0x51B7AB4))(this);
	}
	template <typename T = void> T set_AttachmentGUID(uint64_t value) {
		return ((T (*)(DBEquipAttachmentData*, uint64_t))(Il2CppBase() + 0x51B7ABC))(this, value);
	}
	template <typename T = uint32_t> T get_AttachmentID() {
		return ((T (*)(DBEquipAttachmentData*))(Il2CppBase() + 0x51B7ACC))(this);
	}
	template <typename T = void> T set_AttachmentID(uint32_t value) {
		return ((T (*)(DBEquipAttachmentData*, uint32_t))(Il2CppBase() + 0x51B7AD4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquipAttachmentData*, bool))(Il2CppBase() + 0x51B7ADC))(this, createIfMissing);
	}

};

}
