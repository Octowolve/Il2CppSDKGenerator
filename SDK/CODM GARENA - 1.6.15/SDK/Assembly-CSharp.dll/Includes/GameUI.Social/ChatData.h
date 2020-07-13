#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Social {

class ChatData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Social", "ChatData"));
	}

	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& m_ChatTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_StrChatContent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_StrPlayerName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
