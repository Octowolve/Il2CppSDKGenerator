#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAnswerAllFriendReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAnswerAllFriendReq"));
	}

	template <typename T = uint32_t> T& _answer_flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_answer_flag() {
		return ((T (*)(CSAnswerAllFriendReq*))(Il2CppBase() + 0x51E44C0))(this);
	}
	template <typename T = void> T set_answer_flag(uint32_t value) {
		return ((T (*)(CSAnswerAllFriendReq*, uint32_t))(Il2CppBase() + 0x51E44C8))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSAnswerAllFriendReq*))(Il2CppBase() + 0x51E44D0))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSAnswerAllFriendReq*, int32_t))(Il2CppBase() + 0x51E44D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAnswerAllFriendReq*, bool))(Il2CppBase() + 0x51E44E0))(this, createIfMissing);
	}

};

}
