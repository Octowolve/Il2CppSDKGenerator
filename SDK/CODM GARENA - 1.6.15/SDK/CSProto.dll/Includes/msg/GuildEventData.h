#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildEventData"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _operate_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _operator_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _operator_exp_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _operator_pic_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _operator_relation_nick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _be_operate_player_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _be_operator_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _be_operator_exp_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _be_operator_pic_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _be_operator_relation_nick() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _operator_role() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _operator_gender() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _be_operator_gender() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CF9F4))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(GuildEventData*, uintptr_t))(Il2CppBase() + 0x50CF9FC))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA04))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(GuildEventData*, uint32_t))(Il2CppBase() + 0x50CFA0C))(this, value);
	}
	template <typename T = uint64_t> T get_operate_player_id() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA14))(this);
	}
	template <typename T = void> T set_operate_player_id(uint64_t value) {
		return ((T (*)(GuildEventData*, uint64_t))(Il2CppBase() + 0x50CFA1C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_operator_name() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA2C))(this);
	}
	template <typename T = void> T set_operator_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildEventData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFA34))(this, value);
	}
	template <typename T = int32_t> T get_operator_exp_level() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA3C))(this);
	}
	template <typename T = void> T set_operator_exp_level(int32_t value) {
		return ((T (*)(GuildEventData*, int32_t))(Il2CppBase() + 0x50CFA44))(this, value);
	}
	template <typename T = uintptr_t> T get_operator_pic_info() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA4C))(this);
	}
	template <typename T = void> T set_operator_pic_info(uintptr_t value) {
		return ((T (*)(GuildEventData*, uintptr_t))(Il2CppBase() + 0x50CFA54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_operator_relation_nick() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA5C))(this);
	}
	template <typename T = void> T set_operator_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildEventData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFA64))(this, value);
	}
	template <typename T = uint64_t> T get_be_operate_player_id() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA6C))(this);
	}
	template <typename T = void> T set_be_operate_player_id(uint64_t value) {
		return ((T (*)(GuildEventData*, uint64_t))(Il2CppBase() + 0x50CFA74))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_be_operator_name() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA84))(this);
	}
	template <typename T = void> T set_be_operator_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildEventData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFA8C))(this, value);
	}
	template <typename T = int32_t> T get_be_operator_exp_level() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFA94))(this);
	}
	template <typename T = void> T set_be_operator_exp_level(int32_t value) {
		return ((T (*)(GuildEventData*, int32_t))(Il2CppBase() + 0x50CFA9C))(this, value);
	}
	template <typename T = uintptr_t> T get_be_operator_pic_info() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFAA4))(this);
	}
	template <typename T = void> T set_be_operator_pic_info(uintptr_t value) {
		return ((T (*)(GuildEventData*, uintptr_t))(Il2CppBase() + 0x50CFAAC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_be_operator_relation_nick() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFAB4))(this);
	}
	template <typename T = void> T set_be_operator_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildEventData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFABC))(this, value);
	}
	template <typename T = int32_t> T get_operator_role() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFAC4))(this);
	}
	template <typename T = void> T set_operator_role(int32_t value) {
		return ((T (*)(GuildEventData*, int32_t))(Il2CppBase() + 0x50CFACC))(this, value);
	}
	template <typename T = int32_t> T get_operator_gender() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFAD4))(this);
	}
	template <typename T = void> T set_operator_gender(int32_t value) {
		return ((T (*)(GuildEventData*, int32_t))(Il2CppBase() + 0x50CFADC))(this, value);
	}
	template <typename T = int32_t> T get_be_operator_gender() {
		return ((T (*)(GuildEventData*))(Il2CppBase() + 0x50CFAE4))(this);
	}
	template <typename T = void> T set_be_operator_gender(int32_t value) {
		return ((T (*)(GuildEventData*, int32_t))(Il2CppBase() + 0x50CFAEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildEventData*, bool))(Il2CppBase() + 0x50CFAF4))(this, createIfMissing);
	}

};

}
