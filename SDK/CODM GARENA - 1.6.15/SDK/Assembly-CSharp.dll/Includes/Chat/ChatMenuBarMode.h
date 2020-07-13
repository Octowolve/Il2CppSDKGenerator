#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatMenuBarMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatMenuBarMode"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& playerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& peakLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ladderLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& picInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isSender() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isFriend() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& isInBlackList() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& scene() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
