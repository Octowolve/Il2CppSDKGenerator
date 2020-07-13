#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTestSetAttachmentReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTestSetAttachmentReq"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _attachment_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skill_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _attachment_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _attachment_idx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B622C))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSTestSetAttachmentReq*, int32_t))(Il2CppBase() + 0x51B6234))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_guid() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B623C))(this);
	}
	template <typename T = void> T set_weapon_guid(uint64_t value) {
		return ((T (*)(CSTestSetAttachmentReq*, uint64_t))(Il2CppBase() + 0x51B6244))(this, value);
	}
	template <typename T = uint32_t> T get_attachment_id() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B6254))(this);
	}
	template <typename T = void> T set_attachment_id(uint32_t value) {
		return ((T (*)(CSTestSetAttachmentReq*, uint32_t))(Il2CppBase() + 0x51B625C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skill_id() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B6264))(this);
	}
	template <typename T = uint64_t> T get_attachment_guid() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B626C))(this);
	}
	template <typename T = void> T set_attachment_guid(uint64_t value) {
		return ((T (*)(CSTestSetAttachmentReq*, uint64_t))(Il2CppBase() + 0x51B6274))(this, value);
	}
	template <typename T = int32_t> T get_attachment_idx() {
		return ((T (*)(CSTestSetAttachmentReq*))(Il2CppBase() + 0x51B6284))(this);
	}
	template <typename T = void> T set_attachment_idx(int32_t value) {
		return ((T (*)(CSTestSetAttachmentReq*, int32_t))(Il2CppBase() + 0x51B628C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTestSetAttachmentReq*, bool))(Il2CppBase() + 0x51B6294))(this, createIfMissing);
	}

};

}
