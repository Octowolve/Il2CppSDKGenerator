#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterUpdateOneChapterReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterUpdateOneChapterReq"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _score_star() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _match_result() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _star_content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterUpdateOneChapterReq*))(Il2CppBase() + 0x51CFABC))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, int32_t))(Il2CppBase() + 0x51CFAC4))(this, value);
	}
	template <typename T = int32_t> T get_score_star() {
		return ((T (*)(CSChapterUpdateOneChapterReq*))(Il2CppBase() + 0x51CFACC))(this);
	}
	template <typename T = void> T set_score_star(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, int32_t))(Il2CppBase() + 0x51CFAD4))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSChapterUpdateOneChapterReq*))(Il2CppBase() + 0x51CFADC))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, int32_t))(Il2CppBase() + 0x51CFAE4))(this, value);
	}
	template <typename T = int32_t> T get_match_result() {
		return ((T (*)(CSChapterUpdateOneChapterReq*))(Il2CppBase() + 0x51CFAEC))(this);
	}
	template <typename T = void> T set_match_result(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, int32_t))(Il2CppBase() + 0x51CFAF4))(this, value);
	}
	template <typename T = int32_t> T get_star_content() {
		return ((T (*)(CSChapterUpdateOneChapterReq*))(Il2CppBase() + 0x51CFAFC))(this);
	}
	template <typename T = void> T set_star_content(int32_t value) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, int32_t))(Il2CppBase() + 0x51CFB04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterUpdateOneChapterReq*, bool))(Il2CppBase() + 0x51CFB0C))(this, createIfMissing);
	}

};

}
