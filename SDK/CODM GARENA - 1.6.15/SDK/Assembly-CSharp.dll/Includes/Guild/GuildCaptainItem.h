#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildCaptainItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildCaptainItem"));
	}

	template <typename T = uintptr_t> T& CaptainIconSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CaptainTitleLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CaptainNameLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CaptainLevelLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCaptainInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateCaptainInfo(uintptr_t memberData, int32_t index) {
		return ((T (*)(GuildCaptainItem*, uintptr_t, int32_t))(Il2CppBase() + 0x3E462CC))(this, memberData, index);
	}
	template <typename T = Il2CppString*> T GetGuildTitle(int32_t index) {
		return ((T (*)(GuildCaptainItem*, int32_t))(Il2CppBase() + 0x3E4647C))(this, index);
	}

};

}
