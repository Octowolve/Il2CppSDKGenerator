#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterFriend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterFriend"));
	}

	template <typename T = uintptr_t> T& _friend_profile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _max_chapter_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_friend_profile() {
		return ((T (*)(CSChapterFriend*))(Il2CppBase() + 0x51CF834))(this);
	}
	template <typename T = void> T set_friend_profile(uintptr_t value) {
		return ((T (*)(CSChapterFriend*, uintptr_t))(Il2CppBase() + 0x51CF83C))(this, value);
	}
	template <typename T = int32_t> T get_max_chapter_id() {
		return ((T (*)(CSChapterFriend*))(Il2CppBase() + 0x51CF844))(this);
	}
	template <typename T = void> T set_max_chapter_id(int32_t value) {
		return ((T (*)(CSChapterFriend*, int32_t))(Il2CppBase() + 0x51CF84C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterFriend*, bool))(Il2CppBase() + 0x51CF854))(this, createIfMissing);
	}

};

}
