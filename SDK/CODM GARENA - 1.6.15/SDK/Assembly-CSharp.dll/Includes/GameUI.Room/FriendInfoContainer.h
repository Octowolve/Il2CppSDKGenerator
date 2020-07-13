#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class FriendInfoContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "FriendInfoContainer"));
	}

	template <typename T = uintptr_t> T& Friend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsRecommend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasRequested() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& IsMoreRecommendBtn() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> T& PicInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& StateInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DataType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& NickName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetFullName(uintptr_t friend) {
		return ((T (*)(FriendInfoContainer*, uintptr_t))(Il2CppBase() + 0x2CCE304))(this, friend);
	}

};

}
