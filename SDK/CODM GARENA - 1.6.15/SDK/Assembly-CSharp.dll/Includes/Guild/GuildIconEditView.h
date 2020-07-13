#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildIconEditView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildIconEditView"));
	}

	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& IconTemplate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& IconEditScrollView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_IconNameList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CreateSpriteList() {
		return ((T (*)(GuildIconEditView*))(Il2CppBase() + 0x3BBFEB8))(this);
	}

};

}
