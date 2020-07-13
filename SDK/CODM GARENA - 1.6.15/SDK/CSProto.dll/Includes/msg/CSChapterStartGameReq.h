#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterStartGameReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterStartGameReq"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _tlog_ntf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterStartGameReq*))(Il2CppBase() + 0x51CF968))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterStartGameReq*, int32_t))(Il2CppBase() + 0x51CF970))(this, value);
	}
	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSChapterStartGameReq*))(Il2CppBase() + 0x51CF978))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSChapterStartGameReq*, uintptr_t))(Il2CppBase() + 0x51CF980))(this, value);
	}
	template <typename T = uintptr_t> T get_tlog_ntf() {
		return ((T (*)(CSChapterStartGameReq*))(Il2CppBase() + 0x51CF988))(this);
	}
	template <typename T = void> T set_tlog_ntf(uintptr_t value) {
		return ((T (*)(CSChapterStartGameReq*, uintptr_t))(Il2CppBase() + 0x51CF990))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterStartGameReq*, bool))(Il2CppBase() + 0x51CF998))(this, createIfMissing);
	}

};

}
