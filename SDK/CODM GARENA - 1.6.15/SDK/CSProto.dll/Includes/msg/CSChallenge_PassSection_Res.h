#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengePassSectionRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_PassSection_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _award() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _add_card_res() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6334))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengePassSectionRes*, int32_t))(Il2CppBase() + 0x51E633C))(this, value);
	}
	template <typename T = uintptr_t> T get_award() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6344))(this);
	}
	template <typename T = void> T set_award(uintptr_t value) {
		return ((T (*)(CSChallengePassSectionRes*, uintptr_t))(Il2CppBase() + 0x51E634C))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6354))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengePassSectionRes*, int32_t))(Il2CppBase() + 0x51E635C))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6364))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengePassSectionRes*, int32_t))(Il2CppBase() + 0x51E636C))(this, value);
	}
	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6374))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(CSChallengePassSectionRes*, int32_t))(Il2CppBase() + 0x51E637C))(this, value);
	}
	template <typename T = uintptr_t> T get_add_card_res() {
		return ((T (*)(CSChallengePassSectionRes*))(Il2CppBase() + 0x51E6384))(this);
	}
	template <typename T = void> T set_add_card_res(uintptr_t value) {
		return ((T (*)(CSChallengePassSectionRes*, uintptr_t))(Il2CppBase() + 0x51E638C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengePassSectionRes*, bool))(Il2CppBase() + 0x51E6394))(this, createIfMissing);
	}

};

}
