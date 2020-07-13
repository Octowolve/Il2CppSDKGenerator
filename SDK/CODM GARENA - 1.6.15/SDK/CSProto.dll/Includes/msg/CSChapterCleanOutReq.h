#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterCleanOutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterCleanOutReq"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _clean_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterCleanOutReq*))(Il2CppBase() + 0x51CF3E4))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterCleanOutReq*, int32_t))(Il2CppBase() + 0x51CF3EC))(this, value);
	}
	template <typename T = int32_t> T get_clean_times() {
		return ((T (*)(CSChapterCleanOutReq*))(Il2CppBase() + 0x51CF3F4))(this);
	}
	template <typename T = void> T set_clean_times(int32_t value) {
		return ((T (*)(CSChapterCleanOutReq*, int32_t))(Il2CppBase() + 0x51CF3FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterCleanOutReq*, bool))(Il2CppBase() + 0x51CF404))(this, createIfMissing);
	}

};

}
