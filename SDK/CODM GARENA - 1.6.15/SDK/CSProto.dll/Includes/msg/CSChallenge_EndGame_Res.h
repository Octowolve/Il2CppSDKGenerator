#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeEndGameRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_EndGame_Res"));
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
	template <typename T = int32_t> T& _final_score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeEndGameRes*))(Il2CppBase() + 0x51E5F70))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeEndGameRes*, int32_t))(Il2CppBase() + 0x51E5F78))(this, value);
	}
	template <typename T = uintptr_t> T get_award() {
		return ((T (*)(CSChallengeEndGameRes*))(Il2CppBase() + 0x51E5F80))(this);
	}
	template <typename T = void> T set_award(uintptr_t value) {
		return ((T (*)(CSChallengeEndGameRes*, uintptr_t))(Il2CppBase() + 0x51E5F88))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeEndGameRes*))(Il2CppBase() + 0x51E5F90))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeEndGameRes*, int32_t))(Il2CppBase() + 0x51E5F98))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengeEndGameRes*))(Il2CppBase() + 0x51E5FA0))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengeEndGameRes*, int32_t))(Il2CppBase() + 0x51E5FA8))(this, value);
	}
	template <typename T = int32_t> T get_final_score() {
		return ((T (*)(CSChallengeEndGameRes*))(Il2CppBase() + 0x51E5FB0))(this);
	}
	template <typename T = void> T set_final_score(int32_t value) {
		return ((T (*)(CSChallengeEndGameRes*, int32_t))(Il2CppBase() + 0x51E5FB8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeEndGameRes*, bool))(Il2CppBase() + 0x51E5FC0))(this, createIfMissing);
	}

};

}
