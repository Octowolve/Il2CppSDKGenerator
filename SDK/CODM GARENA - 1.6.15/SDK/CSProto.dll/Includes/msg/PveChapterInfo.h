#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveChapterInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveChapterInfo"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _difficulty_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_level_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _star_rewards() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(PveChapterInfo*))(Il2CppBase() + 0x506F1D4))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(PveChapterInfo*, int32_t))(Il2CppBase() + 0x506F1DC))(this, value);
	}
	template <typename T = int32_t> T get_difficulty_level() {
		return ((T (*)(PveChapterInfo*))(Il2CppBase() + 0x506F1E4))(this);
	}
	template <typename T = void> T set_difficulty_level(int32_t value) {
		return ((T (*)(PveChapterInfo*, int32_t))(Il2CppBase() + 0x506F1EC))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(PveChapterInfo*))(Il2CppBase() + 0x506F1F4))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(PveChapterInfo*, bool))(Il2CppBase() + 0x506F1FC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_level_list() {
		return ((T (*)(PveChapterInfo*))(Il2CppBase() + 0x506F204))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_star_rewards() {
		return ((T (*)(PveChapterInfo*))(Il2CppBase() + 0x506F20C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveChapterInfo*, bool))(Il2CppBase() + 0x506F214))(this, createIfMissing);
	}

};

}
