#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Mail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Mail"));
	}

	template <typename T = uint32_t> T& _recv_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _sender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _attachment() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _read_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _action_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _del_flag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _server_ver() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _title_params() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _content_params() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _mail_status() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _external_url() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _title_is_base64() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _content_is_base64() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _mail_type_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uint32_t> T get_recv_time() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4440))(this);
	}
	template <typename T = void> T set_recv_time(uint32_t value) {
		return ((T (*)(Mail*, uint32_t))(Il2CppBase() + 0x4EA4448))(this, value);
	}
	template <typename T = uintptr_t> T get_sender() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4450))(this);
	}
	template <typename T = void> T set_sender(uintptr_t value) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x4EA4458))(this, value);
	}
	template <typename T = Il2CppString*> T get_title() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4460))(this);
	}
	template <typename T = void> T set_title(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x4EA4468))(this, value);
	}
	template <typename T = Il2CppString*> T get_content() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4470))(this);
	}
	template <typename T = void> T set_content(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x4EA4478))(this, value);
	}
	template <typename T = Il2CppString*> T get_desc() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4480))(this);
	}
	template <typename T = void> T set_desc(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x4EA4488))(this, value);
	}
	template <typename T = uintptr_t> T get_attachment() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4490))(this);
	}
	template <typename T = void> T set_attachment(uintptr_t value) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x4EA4498))(this, value);
	}
	template <typename T = bool> T get_read_flag() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44A0))(this);
	}
	template <typename T = void> T set_read_flag(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x4EA44A8))(this, value);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44B0))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x4EA44B8))(this, value);
	}
	template <typename T = int32_t> T get_action_type() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44C0))(this);
	}
	template <typename T = void> T set_action_type(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x4EA44C8))(this, value);
	}
	template <typename T = bool> T get_del_flag() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44D0))(this);
	}
	template <typename T = void> T set_del_flag(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x4EA44D8))(this, value);
	}
	template <typename T = uint64_t> T get_server_ver() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44E0))(this);
	}
	template <typename T = void> T set_server_ver(uint64_t value) {
		return ((T (*)(Mail*, uint64_t))(Il2CppBase() + 0x4EA44E8))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_title_params() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA44F8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_content_params() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4500))(this);
	}
	template <typename T = int32_t> T get_mail_status() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4508))(this);
	}
	template <typename T = void> T set_mail_status(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x4EA4510))(this, value);
	}
	template <typename T = Il2CppString*> T get_external_url() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4518))(this);
	}
	template <typename T = void> T set_external_url(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x4EA4520))(this, value);
	}
	template <typename T = uintptr_t> T get_title_is_base64() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4528))(this);
	}
	template <typename T = void> T set_title_is_base64(uintptr_t value) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x4EA4530))(this, value);
	}
	template <typename T = uintptr_t> T get_content_is_base64() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4538))(this);
	}
	template <typename T = void> T set_content_is_base64(uintptr_t value) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x4EA4540))(this, value);
	}
	template <typename T = int32_t> T get_mail_type_id() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x4EA4548))(this);
	}
	template <typename T = void> T set_mail_type_id(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x4EA4550))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x4EA4558))(this, createIfMissing);
	}

};

}
