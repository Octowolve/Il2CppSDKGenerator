#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveChapterStarReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveChapterStarReward"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _star() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _box_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(PveChapterStarReward*))(Il2CppBase() + 0x506F230))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(PveChapterStarReward*, int32_t))(Il2CppBase() + 0x506F238))(this, value);
	}
	template <typename T = int32_t> T get_star() {
		return ((T (*)(PveChapterStarReward*))(Il2CppBase() + 0x506F240))(this);
	}
	template <typename T = void> T set_star(int32_t value) {
		return ((T (*)(PveChapterStarReward*, int32_t))(Il2CppBase() + 0x506F248))(this, value);
	}
	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(PveChapterStarReward*))(Il2CppBase() + 0x506F250))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(PveChapterStarReward*, uint32_t))(Il2CppBase() + 0x506F258))(this, value);
	}
	template <typename T = uint64_t> T get_box_guid() {
		return ((T (*)(PveChapterStarReward*))(Il2CppBase() + 0x506F260))(this);
	}
	template <typename T = void> T set_box_guid(uint64_t value) {
		return ((T (*)(PveChapterStarReward*, uint64_t))(Il2CppBase() + 0x506F268))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveChapterStarReward*, bool))(Il2CppBase() + 0x506F278))(this, createIfMissing);
	}

};

}
