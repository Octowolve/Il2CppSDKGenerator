#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquipAttachmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquipAttachmentData"));
	}

	template <typename T = int32_t> T& _pos_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _attachment_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _attachment_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _attachment_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_pos_idx() {
		return ((T (*)(SSEquipAttachmentData*))(Il2CppBase() + 0x51A9138))(this);
	}
	template <typename T = void> T set_pos_idx(int32_t value) {
		return ((T (*)(SSEquipAttachmentData*, int32_t))(Il2CppBase() + 0x51A9140))(this, value);
	}
	template <typename T = uint64_t> T get_attachment_guid() {
		return ((T (*)(SSEquipAttachmentData*))(Il2CppBase() + 0x51A9148))(this);
	}
	template <typename T = void> T set_attachment_guid(uint64_t value) {
		return ((T (*)(SSEquipAttachmentData*, uint64_t))(Il2CppBase() + 0x51A9150))(this, value);
	}
	template <typename T = uint32_t> T get_attachment_id() {
		return ((T (*)(SSEquipAttachmentData*))(Il2CppBase() + 0x51A9160))(this);
	}
	template <typename T = void> T set_attachment_id(uint32_t value) {
		return ((T (*)(SSEquipAttachmentData*, uint32_t))(Il2CppBase() + 0x51A9168))(this, value);
	}
	template <typename T = int32_t> T get_attachment_level() {
		return ((T (*)(SSEquipAttachmentData*))(Il2CppBase() + 0x51A9170))(this);
	}
	template <typename T = void> T set_attachment_level(int32_t value) {
		return ((T (*)(SSEquipAttachmentData*, int32_t))(Il2CppBase() + 0x51A9178))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquipAttachmentData*, bool))(Il2CppBase() + 0x51A9180))(this, createIfMissing);
	}

};

}
