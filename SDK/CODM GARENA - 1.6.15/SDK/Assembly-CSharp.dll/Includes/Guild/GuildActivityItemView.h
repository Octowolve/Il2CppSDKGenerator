#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildActivityItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildActivityItemView"));
	}

	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RankSprite_1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RankSprite_2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RankSprite_3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PlayerIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PlayerLevelLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ActivityLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAcitivityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetAcitivityInfo(int32_t rank, uintptr_t memberInfo) {
		return ((T (*)(GuildActivityItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x3E37DB4))(this, rank, memberInfo);
	}

};

}
