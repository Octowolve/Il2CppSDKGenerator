#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengePassSectionReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_PassSection_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _gold() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengePassSectionReq*))(Il2CppBase() + 0x51E62D0))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengePassSectionReq*, int32_t))(Il2CppBase() + 0x51E62D8))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengePassSectionReq*))(Il2CppBase() + 0x51E62E0))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengePassSectionReq*, int32_t))(Il2CppBase() + 0x51E62E8))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(CSChallengePassSectionReq*))(Il2CppBase() + 0x51E62F0))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(CSChallengePassSectionReq*, int32_t))(Il2CppBase() + 0x51E62F8))(this, value);
	}
	template <typename T = int32_t> T get_gold() {
		return ((T (*)(CSChallengePassSectionReq*))(Il2CppBase() + 0x51E6300))(this);
	}
	template <typename T = void> T set_gold(int32_t value) {
		return ((T (*)(CSChallengePassSectionReq*, int32_t))(Il2CppBase() + 0x51E6308))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSChallengePassSectionReq*))(Il2CppBase() + 0x51E6310))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengePassSectionReq*, bool))(Il2CppBase() + 0x51E6318))(this, createIfMissing);
	}

};

}
