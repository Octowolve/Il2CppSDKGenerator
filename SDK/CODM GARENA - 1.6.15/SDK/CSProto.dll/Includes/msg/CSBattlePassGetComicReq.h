#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetComicReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetComicReq"));
	}

	template <typename T = int32_t> T& _begin_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _end_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _lang_code() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_begin_index() {
		return ((T (*)(CSBattlePassGetComicReq*))(Il2CppBase() + 0x51E50B4))(this);
	}
	template <typename T = void> T set_begin_index(int32_t value) {
		return ((T (*)(CSBattlePassGetComicReq*, int32_t))(Il2CppBase() + 0x51E50BC))(this, value);
	}
	template <typename T = int32_t> T get_end_index() {
		return ((T (*)(CSBattlePassGetComicReq*))(Il2CppBase() + 0x51E50C4))(this);
	}
	template <typename T = void> T set_end_index(int32_t value) {
		return ((T (*)(CSBattlePassGetComicReq*, int32_t))(Il2CppBase() + 0x51E50CC))(this, value);
	}
	template <typename T = int32_t> T get_lang_code() {
		return ((T (*)(CSBattlePassGetComicReq*))(Il2CppBase() + 0x51E50D4))(this);
	}
	template <typename T = void> T set_lang_code(int32_t value) {
		return ((T (*)(CSBattlePassGetComicReq*, int32_t))(Il2CppBase() + 0x51E50DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetComicReq*, bool))(Il2CppBase() + 0x51E50E4))(this, createIfMissing);
	}

};

}
