#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetChapterInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetChapterInfoReq"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _difficulty_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _gm_unlock_all() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSPveLevelGetChapterInfoReq*))(Il2CppBase() + 0x51F1D98))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSPveLevelGetChapterInfoReq*, int32_t))(Il2CppBase() + 0x51F1DA0))(this, value);
	}
	template <typename T = int32_t> T get_difficulty_level() {
		return ((T (*)(CSPveLevelGetChapterInfoReq*))(Il2CppBase() + 0x51F1DA8))(this);
	}
	template <typename T = void> T set_difficulty_level(int32_t value) {
		return ((T (*)(CSPveLevelGetChapterInfoReq*, int32_t))(Il2CppBase() + 0x51F1DB0))(this, value);
	}
	template <typename T = bool> T get_gm_unlock_all() {
		return ((T (*)(CSPveLevelGetChapterInfoReq*))(Il2CppBase() + 0x51F1DB8))(this);
	}
	template <typename T = void> T set_gm_unlock_all(bool value) {
		return ((T (*)(CSPveLevelGetChapterInfoReq*, bool))(Il2CppBase() + 0x51F1DC0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetChapterInfoReq*, bool))(Il2CppBase() + 0x51F1DC8))(this, createIfMissing);
	}

};

}
