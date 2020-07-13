#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSendMailsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSendMailsReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _recver_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mails() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _need_push() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _source() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _serial() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _recver_lobby_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E16FC))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSSendMailsReq*, int32_t))(Il2CppBase() + 0x51E1704))(this, value);
	}
	template <typename T = uint64_t> T get_recver_id() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E170C))(this);
	}
	template <typename T = void> T set_recver_id(uint64_t value) {
		return ((T (*)(CSSendMailsReq*, uint64_t))(Il2CppBase() + 0x51E1714))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mails() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E1724))(this);
	}
	template <typename T = bool> T get_need_push() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E172C))(this);
	}
	template <typename T = void> T set_need_push(bool value) {
		return ((T (*)(CSSendMailsReq*, bool))(Il2CppBase() + 0x51E1734))(this, value);
	}
	template <typename T = uint32_t> T get_source() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E173C))(this);
	}
	template <typename T = void> T set_source(uint32_t value) {
		return ((T (*)(CSSendMailsReq*, uint32_t))(Il2CppBase() + 0x51E1744))(this, value);
	}
	template <typename T = Il2CppString*> T get_serial() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E174C))(this);
	}
	template <typename T = void> T set_serial(Il2CppString* value) {
		return ((T (*)(CSSendMailsReq*, Il2CppString*))(Il2CppBase() + 0x51E1754))(this, value);
	}
	template <typename T = uint32_t> T get_recver_lobby_id() {
		return ((T (*)(CSSendMailsReq*))(Il2CppBase() + 0x51E175C))(this);
	}
	template <typename T = void> T set_recver_lobby_id(uint32_t value) {
		return ((T (*)(CSSendMailsReq*, uint32_t))(Il2CppBase() + 0x51E1764))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSendMailsReq*, bool))(Il2CppBase() + 0x51E176C))(this, createIfMissing);
	}

};

}
