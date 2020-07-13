#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterFetchFriendReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapter_FetchFriend_Req"));
	}

	template <typename T = int32_t> T& _difficult() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_difficult() {
		return ((T (*)(CSChapterFetchFriendReq*))(Il2CppBase() + 0x51CF2D0))(this);
	}
	template <typename T = void> T set_difficult(int32_t value) {
		return ((T (*)(CSChapterFetchFriendReq*, int32_t))(Il2CppBase() + 0x51CF2D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterFetchFriendReq*, bool))(Il2CppBase() + 0x51CF2E0))(this, createIfMissing);
	}

};

}
