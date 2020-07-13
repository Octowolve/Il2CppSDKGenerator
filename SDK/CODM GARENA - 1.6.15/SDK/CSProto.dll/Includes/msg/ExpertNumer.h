#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExpertNumer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExpertNumer"));
	}

	template <typename T = uint32_t> T& _expert_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _suit_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _suit_weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _numer1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _numer2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _numer3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_expert_id() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x522726C))(this);
	}
	template <typename T = void> T set_expert_id(uint32_t value) {
		return ((T (*)(ExpertNumer*, uint32_t))(Il2CppBase() + 0x5227274))(this, value);
	}
	template <typename T = uint32_t> T get_suit_mode() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x522727C))(this);
	}
	template <typename T = void> T set_suit_mode(uint32_t value) {
		return ((T (*)(ExpertNumer*, uint32_t))(Il2CppBase() + 0x5227284))(this, value);
	}
	template <typename T = uint32_t> T get_suit_weapon() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x522728C))(this);
	}
	template <typename T = void> T set_suit_weapon(uint32_t value) {
		return ((T (*)(ExpertNumer*, uint32_t))(Il2CppBase() + 0x5227294))(this, value);
	}
	template <typename T = int32_t> T get_numer1() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x522729C))(this);
	}
	template <typename T = void> T set_numer1(int32_t value) {
		return ((T (*)(ExpertNumer*, int32_t))(Il2CppBase() + 0x52272A4))(this, value);
	}
	template <typename T = int32_t> T get_numer2() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x52272AC))(this);
	}
	template <typename T = void> T set_numer2(int32_t value) {
		return ((T (*)(ExpertNumer*, int32_t))(Il2CppBase() + 0x52272B4))(this, value);
	}
	template <typename T = int32_t> T get_numer3() {
		return ((T (*)(ExpertNumer*))(Il2CppBase() + 0x52272BC))(this);
	}
	template <typename T = void> T set_numer3(int32_t value) {
		return ((T (*)(ExpertNumer*, int32_t))(Il2CppBase() + 0x52272C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExpertNumer*, bool))(Il2CppBase() + 0x52272CC))(this, createIfMissing);
	}

};

}
