#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatFriendCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatFriendCell"));
	}

	template <typename T = uintptr_t> T& HighlightedBG() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetHighlight(bool isShow) {
		return ((T (*)(ChatFriendCell*, bool))(Il2CppBase() + 0x1D3D8E8))(this, isShow);
	}
	template <typename T = void> T xLuaBaseProxy_SetHighlight(bool P0) {
		return ((T (*)(ChatFriendCell*, bool))(Il2CppBase() + 0x1D3DA00))(this, P0);
	}

};

}
