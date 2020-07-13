#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeStartGameReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_StartGame_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _tlog_ntf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_skip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeStartGameReq*))(Il2CppBase() + 0x51CF000))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeStartGameReq*, int32_t))(Il2CppBase() + 0x51CF008))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengeStartGameReq*))(Il2CppBase() + 0x51CF010))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengeStartGameReq*, int32_t))(Il2CppBase() + 0x51CF018))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSChallengeStartGameReq*))(Il2CppBase() + 0x51CF020))(this);
	}
	template <typename T = uintptr_t> T get_tlog_ntf() {
		return ((T (*)(CSChallengeStartGameReq*))(Il2CppBase() + 0x51CF028))(this);
	}
	template <typename T = void> T set_tlog_ntf(uintptr_t value) {
		return ((T (*)(CSChallengeStartGameReq*, uintptr_t))(Il2CppBase() + 0x51CF030))(this, value);
	}
	template <typename T = bool> T get_is_skip() {
		return ((T (*)(CSChallengeStartGameReq*))(Il2CppBase() + 0x51CF038))(this);
	}
	template <typename T = void> T set_is_skip(bool value) {
		return ((T (*)(CSChallengeStartGameReq*, bool))(Il2CppBase() + 0x51CF040))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeStartGameReq*, bool))(Il2CppBase() + 0x51CF048))(this, createIfMissing);
	}

};

}
