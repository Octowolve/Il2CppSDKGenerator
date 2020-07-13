#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatMessageInfoInGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatMessageInfoInGame"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ItemHeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RealRow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& Pos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
