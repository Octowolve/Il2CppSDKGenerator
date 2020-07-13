#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class ChatMessageMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "ChatMessageMode"));
	}

	template <typename T = uint64_t> T& OwnerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Kind() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& TimeNeedShow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsSender() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppString*> T& AvatarURL() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
