#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class InGameChatFriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "InGameChatFriendInfo"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerNickName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& NewChatTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& StartIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& EndIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CellHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& FoldHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isSelected() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemDataList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
